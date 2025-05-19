#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rotate(int (*arr)[5], int n) {

    int result[5][5];
    
    while (n--) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                result[j][4 - i] = arr[i][j];
            }
        }

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = result[i][j];
            }
        }
    }
    
    if (n > 0) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

}

int main() {

    int n;
    int arr[5][5];
    int (*parr)[5] = arr;

    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &parr[i][j]);
        }
    }

    rotate(parr, n % 4);

    return 0;

}