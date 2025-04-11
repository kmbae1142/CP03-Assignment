#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int* arr, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
        arr[i] = sum;
    }
}

int main() {

    int N;
    int arr[100];
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    sum(arr, N);
    
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}