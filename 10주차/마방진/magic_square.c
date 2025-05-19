#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int mgsq[5][5];
    int (*pmgsq)[5] = mgsq;
    int nums[26] = {0,};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &*(*(pmgsq + i) + j));
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (*(nums + *(*(pmgsq + i) + j)) == 1) {
                printf("no");
                return 0;
            }
            else {
                (*(nums + *(*(pmgsq + i) + j)))++;
            }           
        }
    }

    int mem = 0;
    int sum_row;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += *(*(pmgsq + i) + j);
        }
        if (i > 0 && sum != mem) {
            printf("no");
            return 0;
        }
        mem = sum;
    }
    sum_row = mem;


    mem = 0;
    int sum_col = 0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += *(*(pmgsq + j) + i);
        }
        if (i > 0 && sum != mem) {
            printf("no");
            return 0;
        }
        mem = sum;
    }
    sum_col = mem;
    

    int sum1 = 0;
    for (int i = 0; i < 5; i++) {
        sum1 += *(*(pmgsq + i) + i);
    }

    int sum2 = 0;
    for (int i = 0; i < 5; i++) {
        sum2 += *(*(pmgsq + i) + 4 - i);
    }

    if (sum1 == sum2 && sum2 == sum_row && sum_row == sum_col) {
        printf("yes");
    }
    else {
        printf("no");
    }
    
    return 0;
    
}