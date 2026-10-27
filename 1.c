#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double A = 0.1;
    double B = 1.4;
    double H = 0.2;
    int interation = 1;
    printf("| %-10s | %-10s | %-10s |\n", "N Итерации", "Значение X", "Значение Y");
    printf("----------------------------------------\n");
    for(double X = A; X <= B; X += H, interation++){
        double Y = tan(X);
        printf("| %-10d | %-10.2f | %-10.4f |\n", interation, X, Y);
    }
    return 0;
}
/* 13 Вариант*/