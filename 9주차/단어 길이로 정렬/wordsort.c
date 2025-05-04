#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char* arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = (char*)malloc(sizeof(char) * 100);
    }
    char** dptr;
    dptr = arr;

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", dptr[i]);
    }

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (strlen(dptr[j]) > strlen(dptr[j + 1])) {
                char* temp = dptr[j];
                dptr[j] = dptr[j + 1];
                dptr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", dptr[i]);
    }

    return 0;

}