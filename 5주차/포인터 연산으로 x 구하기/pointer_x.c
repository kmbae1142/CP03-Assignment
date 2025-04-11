#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int a, b, c, d;
    scanf("%u %u %u %u", &a, &b, &c, &d);
    
    unsigned char *pa = (unsigned char *)&a;
    unsigned char *pb = (unsigned char *)&b;
    unsigned char *pc = (unsigned char *)&c;
    unsigned char *pd = (unsigned char *)&d;

    unsigned int X = 0;
    unsigned char* temp = (unsigned char*)&X;

    *(temp) = *(pd);
    *(temp + 1) = *(pc + 1);
    *(temp + 2) = *(pb + 2);
    *(temp + 3) = *(pa + 3);

    printf("%u", X);
    
    return 0;
    
}
