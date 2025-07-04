# 가장 먼 두 점 찾기

N개의 (x,y) 좌표로 구성된 점들의 위치가 주어진다.

주어진 점들 중 가장 멀리 떨어진 두 점의 좌표와 두 점 사이의 거리를 출력하시오.

거리 계산에는 유클리드 거리를 이용하시오.

두 점 A(x₁, y₁), B(x₂, y₂) 사이 거리:

![이미지](https://s3.amazonaws.com/hr-assets/0/1747301482-242b731d34-2025-05-15183113.png)

주의사항 - 작성한 프로그램 컴파일 시 -lm 옵션 사용(math.h)

## Input Format

첫 번째 줄에 점의 갯수가 주어진다. 두 번째 줄부터 각 점의 x, y 좌표가 공백으로 구분되어 주어진다.

## Constraints

반드시 각 점에 대한 구조체를 생성하여 프로그램을 작성할 것.

좌표 x,y 는 정수로 주어진다. 점의 갯수는 항상 2개 이상이며, 100개를 넘지 않는다. 두 점 사이의 거리는 소수점 아래 2자리 까지 출력한다.

## Output Format

점의 x, y 좌표를 공백으로 구분하여 출력한다. 먼저 입력받은 점의 좌표부터 출력한다. 좌표를 출력한 후 다음 줄에 두 점 사이의 거리를 출력한다.

## Sample Input 0
```
4
0 0
3 4
1 1
9 8
```
## Sample Output 0
```
0 0
9 8
12.04
```