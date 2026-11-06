#include <stdio.h>
int main(){
    int i, j;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 4; j++){
            if ((i + j) % 2 == 0)
                printf("X");
            else
                printf("O");
        }
        printf("\n");
    }
    return 0;
}