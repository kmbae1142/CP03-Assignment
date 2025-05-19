#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i = 0;
    int* arr = (int*)malloc(sizeof(int) * 5000);
    int len = 5000;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (i >= len) {
            len *= 2;
            int* new = (int*)malloc(sizeof(int) * len);
            for (int j = 0; j < i; j++) {
                new[j] = arr[j];
            }
            free(arr);
            arr = new;
        }
        arr[i++] = n;
        
    }

    i -= 1;
    for (; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    
    free(arr);
    return 0;

}
