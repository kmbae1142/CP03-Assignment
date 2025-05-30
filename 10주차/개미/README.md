# 개미

10x10 오델로 판 위에 개미가 올라가 있다. 개미는 보드판을 따라서 이동한다고 한다.

개미는 맨 왼쪽 위에서 시작해서 처음은 오른쪽방향으로 이동하고 맨 끝에 도착하면 그 아래로
내려간 다음에 다시 왼쪽으로 이동하는 식이다. 즉, 시계방향으로 이동하되 점점 가운데로 좁아지는
나선형 이동이다. 개미의 이동속도는 1초에 보드 1칸이다.

![이미지](https://s3.amazonaws.com/hr-assets/0/1681788348-26c9b06e15-20230418_122537.png)

입력으로 들어오는 n초 동안 이동한 개미의 경로를 #으로 표시하여 출력하도록 하자.

## Input Format

n초가 입력으로 들어온다.

## Constraints

배열의 포인터를 활용하여 문제를 해결하시오

## Output Format

10x10 보드 상에서 n초(0<=n<=99) 가 지난 순간 개미가 이동한 경로를 #으로 표시하고 지나지 않은 길은 . 으로 표시한다.
0초인 순간은 최초 시작점에 위치하고 1초인 순간에는 시작점에서 한칸 이동한 곳이다.

## Sample Input 0
```
0
```
## Sample Output 0
```
#.........
..........
..........
..........
..........
..........
..........
..........
..........
..........
```
## Sample Input 1
```
12
```
## Sample Output 1
```
##########
.........#
.........#
.........#
..........
..........
..........
..........
..........
..........
```