# 계산기 3

계산해야 할 수식이 구조체의 형태로 주어진다.
구조체 expression은 value1, value2, operator을 갖고 있으며, 각각 값1, 값2, 수행할 연산을 의미한다.

아래 주어진 코드를 이용하여 구조체에 담진 수식을 계산하는 calculator()함수를 작성하시오.

```c
#include <stdio.h>

typedef struct expression {
    int value1;
    int value2;
    char operator;
} Expression;

int calculator(Expression e) {
    // write your code
}

int main(){
    int N;
    scanf("%d", &N);
    
    for (int i=0; i<N; i++){
        Expression e;
        scanf("%d %c %d", &(e.value1), &(e.operator), &(e.value2));
        
        printf("%d\n", calculator(e));
    }
    return 0;
}
```

## Input Format

첫 번째 줄에 수식의 개수 N이 주어진다.
이후 N줄에 걸쳐 계산해야 할 정수로 된 수식이 입력된다.

## Constraints

주어질 수 있는 operator는 '+', '-', '*', '/' 이며, 계산 결과의 오버플로우와 0으로 나누기 등은 고려하지 않는다.

1 < N < 100

## Output Format

정수인 계산 결과를 출력한다.

## Sample Input 0
```
4
1 + 2
1 - 2
1 * 2
1 / 2
```
## Sample Output 0
```
3
-1
2
0
```