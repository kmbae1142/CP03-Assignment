#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i = 1, temp = 1;
    scanf("%d", &n);
    
    while (1) {
        temp *= i;
        if (temp == n) {
            printf("%d", i);
            break;
        }
        else if (temp > n) {
            printf("-1");
            break;
        }
        i++;
    }
    return 0;
}