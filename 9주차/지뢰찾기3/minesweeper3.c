#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char* arr[10];
    for (int i=0; i<10; i++)
        arr[i] = (char*)malloc(sizeof(char) * 10);
    char** dptr;
    dptr = arr;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &dptr[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (dptr[i][j] != '*') {
                int min_col = j - 1 >= 0 ? j - 1 : 0;
                int max_col = j + 1 <= 9 ? j + 1 : 9;
                int min_row = i - 1 >= 0 ? i - 1 : 0;
                int max_row = i + 1 <= 9 ? i + 1 : 9;
                for (int row = min_row; row <= max_row; row++) {
                    for (int col = min_col; col <= max_col; col++) {
                        if (dptr[row][col] == '*') {
                            dptr[i][j]++;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", dptr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

