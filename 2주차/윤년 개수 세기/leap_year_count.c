#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, j, cnt = 0;
    scanf("%d %d", &i, &j);
    
    if ((i >= 0 && i <= 9999) && (j >= 0 && j <= 9999) && i <= j) {
        for (; i <= j; i++) {
            if (((i % 4 == 0) && (i % 100 != 0)) || i % 400 == 0) cnt++;
        }    
        printf("%d\n", cnt);
    }
    else {
        printf("bound error\n");
    }
    
    return 0;
}