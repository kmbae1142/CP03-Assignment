#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void analyze(char* str, int* set) {
    for (int i = 0; *(str + i) != '\0'; i++) {
        (*(set + (*(str + i) - 'a')))++;
    }
}

int main() {

    char str[1002];
    char com[1002];
    int set_str[26] = {0,};
    int set_com[26] = {0,};
    int check = 0;
    
    scanf("%s\n%s", str, com);
    
    analyze(str, set_str);
    analyze(com, set_com);
    
    for (int i = 0; i < 26; i++) {
        if (*(set_str + i) < *(set_com + i)) {
            check = 1;
            break;
        }
    }
    
    printf("%s", check == 1 ? "No" : "Yes");
    
    return 0;
    
}