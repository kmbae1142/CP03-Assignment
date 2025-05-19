#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 5

char **delete_char(char input[][SIZE], int *new_row, int *new_col) {
    
    char **result = (char**)malloc(sizeof(char*) * SIZE);
    int count = 0;
    
    //row
    for (int i = 0; i < SIZE; i++) {
        int diff_row = 0;
        for (int j = 0; j < SIZE - 1; j++) {
            if (input[i][j] != input[i][j + 1]) {
                diff_row = 1;
                break;
            }
        }
        if (diff_row) {
            result[count] = (char*)malloc(sizeof(char) * SIZE);
            for (int n = 0; n < SIZE; n++) {
                result[count][n] = input[i][n];
            }
            count++;
        }
    }
    
    //col
    int col_count = 5, equal_col = 1;
    int i = 0;
    while (i < col_count) {
        if (equal_col == 1) i = 0;
        equal_col = 1;
        for (int j = 0; j < count - 1; j++) {
            if (result[j][i] != result[j + 1][i]) {
                equal_col = 0;
                break;
            }
        }
        if (equal_col) {
            col_count--;
            for (int row = 0; row < count; row++) {
                for (int col = i; col < col_count; col++) {
                    result[row][col] = result[row][col + 1];
                }
                char *new = (char*)malloc(sizeof(char) * col_count);
                for (int col = 0; col < col_count; col++) {
                    new[col] = result[row][col];
                }
                free(result[row]);
                result[row] = new;
            }
            
        }
        i++;
    }
    
    *new_row = count;
    *new_col = col_count;

    return result;
}

int main() {
    
    char input[SIZE][SIZE];
    int new_row, new_col;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf(" %c", &input[i][j]);

    char **resized = delete_char(input, &new_row, &new_col);

    if (resized != NULL) {
        if (new_row > 0 && new_col > 0) {
            for (int i = 0; i < new_row; i++) {
                for (int j = 0; j < new_col; j++) {
                    printf("%c ", resized[i][j]);
                }
                printf("\n");
                free(resized[i]);
            }
        }
        else {
            printf("invalid");
        }
        free(resized);
    }

    return 0;
}
