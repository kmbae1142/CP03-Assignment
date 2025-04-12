#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {

    int N, i = 0;
    scanf("%d", &N);
    
    while (1) {
        int num = fibo(i++);
        if (num == N) {
            printf("y");
            break;
        }
        else if (num > N) {
            printf("n");
            break;
        }
    }
    
    return 0;

}