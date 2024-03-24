#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char p;
    char str[100] = "";
    char s1[50];
    char s2[50];
    int b; //целое число
    int c;
    unsigned int d;
    float x;//вещественное число
    float y;
    printf("Введите символ: ");
    scanf_s("%c", &p);
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
    printf("Символ: %c %d\n Десятичное число: (%-7d)\n Шестнадцатиричное число: %7x\n Числа с плавающей точкой: %.4f %.5e\n Беззнаковое число: %u\n %o %x\n Количество симоволов в строке: %d\n Меня зовут: %s", p, p, b, c, x, y, d, d, d, strlen(str) - 1, str);
    return 0;
}
