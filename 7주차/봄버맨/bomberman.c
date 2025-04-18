#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char arr[20][20] = {0,};
    int x, y, n, a, b;
    scanf("%d %d %d", &x, &y, &n);
    scanf("%d %d", &a, &b);

    int min_row = (y - n / 2) < 0 ? 0 : (y - n / 2);
    int max_row = (y + n / 2) > 19 ? 19 : (y + n / 2);
    int min_col = (x - n / 2) < 0 ? 0 : (x - n / 2);
    int max_col = (x + n / 2) > 19 ? 19 : (x + n / 2);

    for (int i = min_row; i <= max_row; i++) {
        for (int j = min_col; j <= max_col; j++) {
            arr[i][j] = 'X';
        }
    }

    if (arr[b][a] == 'X') {
        arr[b][a] = 'D';
    }
    else {
        arr[b][a] = 'A';
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (arr[i][j] == 0)
                printf("%c ", arr[i][j] + '0');
            else
                printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}
