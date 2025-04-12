#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int G;
    scanf("%d", &G);
    
    printf("%d", G % 3 == 0 ? G / 3 : G / 3 + 1);
    
    return 0;
}