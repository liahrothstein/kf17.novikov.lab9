#include <stdio.h>

int main() {
    // Пример 1: Латинский алфавит
    char ch;
    printf("Code table (Example 1):\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c - %3d  ", ch, ch);
        if (ch % 5 == 0) // Перенос строки для удобства чтения
            printf("\n");
    }
    printf("\n\n");

    // Пример 2: Все коды от 33 до 126 (печатные символы)
    // В методичке пример от 0 до 255, но многие из них непечатаемые
    int i;
    printf("Code table (Example 2 - partial):\n");
    for (i = 33; i <= 60; i++) {
        printf("%3d-%c  ", i, i);
    }
    printf("\n");
    return 0;
}