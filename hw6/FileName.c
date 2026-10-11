#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    double y;

    printf("Проверка попадания точки в заштрихованную область\n");
    printf("Введите координаты точки (x и y): ");

    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка ввода данных.\n");
        return 1;
    }
    if (x * x + y * y <= 4 && y >= x && x >= 0) {
        printf("Точка (%.2lf, %.2lf) попадает в заштрихованную область.\n", x, y);
    }
    else {
        printf("Точка (%.2lf, %.2lf) не попадает в заштрихованную область.\n", x, y);
    }
    return 0;
}