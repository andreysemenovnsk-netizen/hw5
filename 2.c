#include <stdio.h>
#define HEIGHT 5
int main(){
    for(int i = 0; i < HEIGHT; i++){
        printf("=");
    }
    printf("\n");
    for(int i = 0; i < HEIGHT - 2; i++){
        printf("=");
        for(int k = 0; k < HEIGHT -2; k++){
            printf(" ");
        }
        printf("=\n");
    }
    for(int i = 0; i <HEIGHT; i++){
        printf("=");
    }
    return 0;
}
/* 9 вариант*/