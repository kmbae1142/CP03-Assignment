#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int image[5][5];
    int mask[3][3];
    int result[3][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &*(*(image + i) + j));
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &*(*(mask + i) + j));
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum = 0;
            for (int N = i; N < i + 3; N++) {
                for (int M = j; M < j + 3; M++) {
                    sum += *(*(image + N) + M) * *(*(mask + N - i) + M - j);
                }
            }
            if (sum < 0)
                *(*(result + i) + j) = 0;
            else if (sum > 9)
                *(*(result + i) + j) = 9;
            else
                *(*(result + i) + j) = sum;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
    
}