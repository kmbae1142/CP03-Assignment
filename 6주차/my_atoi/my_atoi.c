#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_atoi(char* S) {

    int base = strlen(S) - 1;
    int sum = 0;

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] < '0' || S[i] > '9') {
            return 0;
        }
        else {
            sum += (S[i] - '0') * (int)pow(10, base--);
        }
    }

    return sum;
}

int main() {
    char S[1024] = {0};
    scanf("%s", S);
    
    int result = my_atoi(S);
    printf("%d", result);
    
    return 0;
}