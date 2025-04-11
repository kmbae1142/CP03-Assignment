#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d %d", 2*x*y - 12, 3*(int)pow(x,2) - 12*(int)pow(y,3) + 21*x + 2*y);
    return 0;

}