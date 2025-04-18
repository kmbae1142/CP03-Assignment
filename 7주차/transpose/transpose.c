#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[127][127];
    int N, M;
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}
