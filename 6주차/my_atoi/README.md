# my_atoi

문자열 S를 받아 문자열을 정수로 변환한다.
정수로 변환할 수 없는 경우 0을 출력한다.

## Input Format

첫 줄에 문자열 S가 입력된다.

## Constraints

아래 코드의 my_atoi()의 인자와 몸체를 수정하여 문제를 해결한다.
main() 코드는 my_atoi()함수의 인자만 수정한다.
라이브러리에 정의되어 있는 atoi()함수를 사용하지 않는다.

```c
#include <stdio.h>

int my_atoi(/**/) {

}

int main() {
    char S[1024] = {0};
    scanf("%s", S);
    
    int result = my_atoi(/**/);
    printf("%d", result);
}
```

## Output Format

0~ 2,147,483,647 사이의 정수를 출력한다.

## Sample Input 0
```
3434
```
## Sample Output 0
```
3434
```