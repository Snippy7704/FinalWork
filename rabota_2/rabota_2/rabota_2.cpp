﻿#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char a, str[100] = "", s1[50], s2[50];
    int b, c;
    unsigned int d;
    float x, y;
    printf("Введите символ: ");
    scanf_s("%c", &a);
    getchar();
    printf("Введите своё имя и фамилию: ");
    fgets(str, sizeof(str), stdin);
    //scanf_s("%s^[\n]", str);
    printf("Введите два целых числа: ");
    scanf_s("%d %d", &b, &c);
    printf("Введите два числа с плавающей точкой: ");
    scanf_s("%f %f", &x, &y);
    printf("Введите беззнаковое число: ");
    scanf_s("%u", &d);
    printf("Символ: %c %d\n Десятичное число: (%-7d)\n Шестнадцатиричное число: %7x\n Числа с плавающей точкой: %.4f %.5e\n Беззнаковое число: %u\n %o %x\n Количество симоволов в строке: %d\n Меня зовут: %s", a, a, b, c, x, y, d, d, d, strlen(str) - 1, str);
    return 0;
}
