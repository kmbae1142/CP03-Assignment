#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int p[], int M) {
    int sum = 0;
    for (int i = 0; i < M; i++) {
        sum += p[i];
    }
    return sum;
}

int main() {
    
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[100][100];
    int (*p)[100] = arr;
    int *parr[100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        parr[i] = p + i;
    }

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (sum(parr[j], M) > sum(parr[j + 1], M)) {
                int* temp = parr[j];
                parr[j] = parr[j + 1];
                parr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", parr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}
