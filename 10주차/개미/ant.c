#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; scanf("%d", &n);
    int board[10][10];
    int (*pBoard)[10] = board;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            pBoard[i][j] = '.';
        }
    }

    int i = 0, j = 0, mode = 0, l_row = 0, r_row = 9, l_col = 0, r_col = 9;

    while (1) {

        if (n == -1) break;

        if (j > r_col || j < l_col) {
            if (j > r_col) {
                j = r_col;
                i = ++l_row;
                mode = 1;
            }
            else if (j < l_col) {
                j = l_col;
                i = --r_row;
                mode = 3;
            }
        }

        if (i > r_row || i < l_row) {
            if (i > r_row) {
                i = r_row;
                j = --r_col;
                mode = 2;
            }
            else if (i < l_row) {
                i = l_row;
                j = ++l_col;
                mode = 0;
            }
        }

        pBoard[i][j] = '#';

        switch (mode) {
            case 0: j++; break;
            case 1: i++; break;
            case 2: j--; break;
            case 3: i--; break;
        }

        n--;

    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", pBoard[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}