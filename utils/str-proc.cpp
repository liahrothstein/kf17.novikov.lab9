#include <stdio.h>
#include <string.h>

/* Функция для замены конкретной русской буквы
   принимает строку, что ищем (lower) и на что меняем (upper) */
int replaceVowel(char *str, const char *lower, const char *upper) {
    int count = 0;
    char *pos = str; // начинаем с начала строки
    
    /* Ищем вхождение маленькой буквы (например "а")
       strstr возвращает указатель на найденное место или NULL */
    while ((pos = strstr(pos, lower)) != NULL) {
        /* Копируем байты заглавной буквы поверх строчной
           В UTF-8 русские буквы занимают одинаковое кол-во байт (2),
           поэтому это безопасно */
        memcpy(pos, upper, strlen(upper));
        
        count++;
        pos++; // двигаемся дальше, чтобы не зациклиться
    }
    return count;
}

// Функция изменения строки
void stringProccess(const char inputStr[], const char *variantName) {
    char str[1024]; // Увеличим буфер на всякий случай
    strcpy(str, inputStr); 
    
    printf("\n--- Применение логики Варианта 14 к тексту: %s ---\n", variantName);
    printf("Исходная строка: %s\n", str);
    
    int changed_count = 0;

    /* Массив пар: {маленькая, БОЛЬШАЯ}
       В UTF-8 это строки! */
    const char *vowels[][2] = {
        {"а", "А"}, {"о", "О"}, {"у", "У"}, {"ы", "Ы"}, {"э", "Э"},
        {"я", "Я"}, {"е", "Е"}, {"ё", "Ё"}, {"ю", "Ю"}, {"и", "И"}
    };
    
    int num_vowels = sizeof(vowels) / sizeof(vowels[0]);

    // Проходим по всем гласным парам
    for (int i = 0; i < num_vowels; i++) {
        changed_count += replaceVowel(str, vowels[i][0], vowels[i][1]);
    }
    
    printf("Результат: %s\n", str);
    printf("Изменено гласных: %d\n", changed_count);
}