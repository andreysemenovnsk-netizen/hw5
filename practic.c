#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double A = -2.0;
    double B = 2.0;
    double H = 1.0;
    int iteration;
    printf("| %-10s | %-10s | %-10s |\n", "N Итерации", "Значение X", "Значение Y");
    printf("-----------------------------------------\n");
    for(double X = A; X <= B; X += H,  iteration++){
        double Y = pow(X,2) + 2 * X + 1;
        printf("| %-10d | %-10.2f | %-10.4f\n", iteration, X, Y);
    }
    return 0;

}
