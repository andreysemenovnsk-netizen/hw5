#include <stdio.h>
#include <math.h>
int main(){
    int n = 8;
    double ORIGINAL[8];
    double PROCESSED[8];
    for(int k = 1; k <= n; k++){
        ORIGINAL[k] = pow(2,k-1);
        printf("%.2f ", ORIGINAL[k]);
    }
    printf("\n");
    double SUMM = 0.0;
    for(int i = 1; i <= n; i++){
        SUMM += ORIGINAL[i];
        PROCESSED[i] = SUMM;
        printf("%.2f ", PROCESSED[i]);
    }
    printf("\n");
    return 0;
}