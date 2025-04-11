#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max_increase_len(int* arr, int len) {
    int count = 0, max = -1;
    for (int i = 1; i < len; i++) {
        if (arr[i] > arr[i - 1]) {
            count++;
        }
        else {
            if (max < count) max = count;
            count = 0;
        }
    }
    if (max < count) max = count;
    return max + 1;
}

int main() {

    int N; scanf("%d", &N);
    int arr[100];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d", max_increase_len(arr, N));
    
    return 0;
}