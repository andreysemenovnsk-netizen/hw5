#include <stdio.h.>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int N = 0;
    while(N >= 0){
        printf("Введите количество слагаемых N: ");
        scanf("%d", &N);
        double SUMM = 0;
        for(int i = 1; i <= N; i++){
            SUMM += i / pow(2,i);
        }
        printf("SUMM: %.6f\n", SUMM);
    }
    return 0;
}
/* 15 вариант*/