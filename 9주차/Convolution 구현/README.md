# Convolution 구현

![이미지](https://s3.amazonaws.com/hr-assets/0/1745476134-dd3c587f7a-2d_multiplication.png)

당신은 간단한 이미지 처리 프로그램을 작성하려고 한다. 5x5 크기의 흑백 이미지가 주어진다. 각 픽셀 값은 0 이상 9 이하의 정수이다.

또한, 3x3 크기의 고정된 마스크(Filter)가 주어진다. 이 마스크를 이용해 이미지에 Convolution 연산을 수행하라.

Convolution 연산은 다음과 같이 진행된다.

마스크의 중심을 기준으로, 이미지의 각 위치에 마스크를 적용.

해당 영역의 값과 마스크 값을 곱한 뒤 모두 더해 결과 배열에 저장.

가장자리는 연산하지 않는다. (즉, 결과 배열 크기는 3x3)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int image[5][5];
    int mask[3][3];
    int result[3][3];
    /////////////////
    // write your code in this section
    // do not use arr directly, use dptr
    
    /////////////////
    return 0;
}
```

## Input Format

5X5 크기의 이미지가 입력으로 주어지고 3X3 크기의 마스크가 다음 입력으로 주어진다.

## Constraints

이미지의 픽셀 값은 0이상 9이하의 정수이다. 마스크를 적용한 후, 픽셀 값이 위의 범위를 벗어날 경우 0 미만은 0으로, 9 초과는 9로 처리한다. 마스크의 값은 정수(int) 범위를 갖는다. 배열 선언 이후에는 반드시 연산에 포인터를 사용해야 한다.

## Output Format

3X3 크기의 마스크를 적용한 결과를 출력한다.

## Sample Input 0
```
1 2 3 4 5
5 4 3 2 1
1 1 1 1 1
9 8 7 6 5
5 6 7 8 9
0 -1 0
-1 5 -1
0 -1 0
```
## Sample Output 0
```
9 5 1
0 0 0
9 9 9
```