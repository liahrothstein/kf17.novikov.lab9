#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "../utils/concat-str.h"

int main() {
    // Пример 5: strlen, strcpy, strcmp
    char str[] = "Example String";
    char str2[50];
    int length = strlen(str);
    printf("Length: %d\n", length);
    
    strcpy(str2, str);
    printf("Copied string: %s\n", str2);
    printf("Comparison result: %d\n", strcmp(str, str2)); // 0, т.к. равны

    // Пример 6: Преобразование в числа
    int a = atoi("123");
    printf("Int: %d, Calc: %d\n", a, a + 10);
    
    float c = atof("12.457");
    printf("Float: %f\n", c);

    // Пример 7: Функция конкатенации
    char s1[100] = "Start ";
    char s2[] = "Middle ";
    char s3[] = "End";
    ConcatStrings(s1, s2, s3);
    printf("Concatenated: %s\n", s1);

    return 0;
}