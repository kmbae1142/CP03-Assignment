# transpose

2차원 행렬의 행과 열을 바꾼 행렬을 transpose(전치)행렬이라고 한다.
입력으로 주어진 2차원의 정수 행렬의 transpose 행렬을 출력한다.

![이미지](https://s3.amazonaws.com/hr-assets/0/1744337438-0d5210ae08-2025-04-11110853.png)

## Input Format

입력 첫 줄에 입력될 행렬의 행과 열인 N, M이 정수로 주어진다.
이후 공백으로 구분된 M개의 정수 X_m이 N줄에 걸쳐 입력된다.

## Constraints

1 < N < 128
1 < M < 128
X_m은 C의 int 범위

## Output Format

transpose 행렬을 출력한다.

## Sample Input 0
```
3 3
1 2 3
4 5 6
7 8 9
```
## Sample Output 0
```
1 4 7
2 5 8
3 6 9
```
## Sample Input 1
```
2 3
1 2 3
4 5 6
```
## Sample Output 1
```
1 4
2 5
3 6
```