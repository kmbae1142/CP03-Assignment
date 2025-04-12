#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char arr[4], ch;

    for (int i = 0; i < 4; i++) {
        scanf(" %c", &arr[i]);
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 'a' - 'A';
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 'a' - 'A';
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}