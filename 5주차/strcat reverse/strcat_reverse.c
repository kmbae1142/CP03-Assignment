#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    
    char* array[] = {a, b, c, d};
    char result[200] = "";

    scanf("%s\n%s\n%s\n%s", *(array), *(array + 1), *(array + 2), *(array + 3));

    for (int i = 3; i >= 0; i--) {
        strcat(result, *(array + i));
    }
    
    printf("%s\n", result);
    return 0;

}