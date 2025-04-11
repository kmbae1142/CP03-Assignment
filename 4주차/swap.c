#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N, K, i, j;
    scanf("%d %d", &N, &K);
    
    int* arr = (int*)malloc(sizeof(int) * N);
    
    for (int l = 0; l < N; l++) {
        scanf("%d", &arr[l]);
    }
    
    while (K--) {
        scanf("%d %d", &i, &j);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for (int l = 0; l < N; l++) {
        printf("%d ", arr[l]);
    }
    
    return 0;

}