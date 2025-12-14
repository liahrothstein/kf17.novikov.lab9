#include <stdio.h>

int main() {
    char str1[20], str2[30];
    
    // Пример 3: Символьный ввод
    char ch;
    printf("Input symbol: ");
    ch = getchar();
    printf("This symbol is: ");
    putchar(ch);
    printf("\nCode: %d\n", ch);

    // Очистка буфера перед вводом строк (важный момент из методички)
    while (getchar() != '\n'); 

    // Пример 4: Буферизация и строки
    printf("\nInput new string (scanf): ");
    scanf("%s", str1); // Считает только до пробела
    printf("Output scanf: %s\n", str1);
    
    // Очистка буфера
    while (getchar() != '\n');

    printf("Input new string (gets behavior): ");
    fgets(str2, 30, stdin); // Используем fgets вместо gets
    printf("Output gets: %s", str2);

    return 0;
}