#include <stdio.h>
#include <math.h>
#include <locale.h>
double calc(double a, double b){
    return  cbrt(a * pow(b,2));
}
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a,b;
    while(scanf("%lf %lf", &a, &b) == 2, a >= 0 && b >= 0){
        double outp = calc(a,b);
        printf("Вывод: %.4f\n", outp);
    }
    return 0;
}
