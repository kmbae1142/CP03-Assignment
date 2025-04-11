#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[103];
    int count = 0, i;
    scanf("%s", str);
    int len = strlen(str);
    
    for (i = 1; i < len; i++) {
        if (*(str + i - 1) != *(str + i)) {
            if (i > 0) printf("%c%d", *(str + i - 1), count + 1);
            count = 0;
        }
        else {
            count++;
        }
    }

    printf("%c%d", *(str + i - 1), count + 1);
    return 0;

}