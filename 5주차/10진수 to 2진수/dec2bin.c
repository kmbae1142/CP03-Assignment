#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    unsigned int X;
    
    scanf("%d", &N);
    
    while (N--) {
        
        int i = 0;
        char str[35];
        scanf("%u", &X);
        
        while (X > 0) {
            *(str + (i++)) = X % 2 + '0';
            X /= 2;
        }

        if (i > 0) {
            for (int j = i - 1; j >= 0; j--) {
                printf("%c", *(str + j));
            }
        }
        else {
            printf("0");
        }

        printf("\n");

    }
    
    return 0;
    
}