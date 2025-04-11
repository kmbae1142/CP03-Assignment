#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int indexof(char* S1, char* S2) {
    int i = 0, min = 1025;
    for (i = 0; S1[i] != '\0'; i++) {
        int error = 0;
        if (S2[0] == S1[i]) {
            for (int j = 1; S2[j] != '\0'; j++) {
                if (S1[i + j] != S2[j]) {
                    error = 1;
                    break;
                }
            }
            if (!error) {
                if (min > i) min = i;
            }
        }
    }
    return min == 1025 ? -1 : min;
}

int main() {

    char S1[1024], S2[1024];
    scanf("%s\n%s", S1, S2);
    
    printf("%d", indexof(S1, S2));
    
    return 0;
}
