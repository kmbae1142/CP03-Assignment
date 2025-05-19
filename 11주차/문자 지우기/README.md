# 문자 지우기

5x5 문자 배열에서, 같은 줄의 문자가 모두 동일하다면 해당 줄을 지우고 새로운 배열을 생성하여 출력하는 프로그램을 작성하시오.

다음과 같은 5x5 배열에서 같은 문자로만 구성된 행, 열을 제거합니다.

```
a b c d e
a g h i j
a l m n o
a q r s t
a v w x y

첫 번째 열은 a로 모두 같으므로, 결과로 아래 배열을 출력합니다.
b c d e
g h i j
l m n o
q r s t
v w x y
```

아래 코드를 사용하여 구현하세요.

```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

char** delete_char(char input[SIZE][SIZE], int *new_row, int *new_col) {
    // fill this function

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
        for (int i = 0; i < new_row; i++) {
            for (int j = 0; j < new_col; j++) {
                printf("%c ", resized[i][j]);
            }
            printf("\n");
            free(resized[i]);
        }
        free(resized);
    }

    return 0;
}
```

## Input Format

5x5 크기의 문자 배열이 공백으로 구분되어 입력으로 주어집니다.

## Constraints

입력되는 배열의 요소는 알파벳 대소문자로 한정됩니다.

## Output Format

같은 문자로 구성된 줄을 제거한 배열을 공백으로 구분해 출력합니다.

만약 출력할 행, 열이 없을 경우 "invalid"를 출력합니다.

## Sample Input 0
```
a b c d e
a g h i j
a l m n o
a q r s t
a v w x y
```
## Sample Output 0
```
b c d e
g h i j
l m n o
q r s t
v w x y
```