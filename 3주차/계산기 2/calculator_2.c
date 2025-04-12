#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cal(int n, int m, int sol) {
    if (sol == '+') return n + m;
    else if (sol == '-') return n - m;
    else if (sol == '*') return n * m;
    else if (sol == '/') return n / m;
    else if (sol == '%') return n % m;
    else if (sol == '^') return (int)pow(n, m);
    else return;
}

int main() {

    int N, n, m;
    char sol;
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d %c", &n, &m, &sol);
        printf("%d\n", cal(n, m, sol));
    }
    
    return 0;

}