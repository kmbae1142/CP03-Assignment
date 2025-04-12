#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b) {
    
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    
    return a;
    
}

int main() {

    int N, n, m;
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d", &n, &m);
        printf("%d %d\n", gcd(n, m), n * (m / gcd(n, m)));
    }
    
    return 0;

}
