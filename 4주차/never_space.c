#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[102];
    int i = 0, ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ') str[i++] = ch;
    }

    str[i] = '\0';
    
    printf("%s\n", str);    
    return 0;

}