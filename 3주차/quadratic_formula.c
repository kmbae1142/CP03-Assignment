#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, a, b, c;
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d %d", &a, &b, &c);
        if (b * b - 4 * a * c < 0) {
            printf("error\n");
            continue;
        }
        
        double r1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        double r2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        
        if (r1 < r2) {
            printf("%.2lf %.2lf\n", r2, r1);
        }
        else {
            printf("%.2lf %.2lf\n", r1, r2);
        }
    }
    
    return 0;

}
