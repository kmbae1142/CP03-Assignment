# 포인터 연산으로 x 구하기

unsigned int 형태의 정수 a, b, c, d가 주어진다.
아래 그림과 같이 a, b, c, d의 일부분을 추출하여 새로운 x를 구하는 프로그램을 작성한다.

![이미지](https://s3.amazonaws.com/hr-assets/0/1743405522-1417140018-1.png)

a의 첫 번째 바이트를 추출하여 x의 첫 번째 바이트에 넣고,
b의 두 번째 바이트를 추출하여 x의 두 번째 바이트가 넣고,
c의 세 번째 바이트를 추출하여 x의 세 번째 바이트가 넣고,
d의 마지막 바이트를 추출하여 x의 마지막 바이트에 넣는 방식이다.

## Input Format

입력으로 4개의 10진수 정수 a,b,c,d가 공백으로 구분되어 들어온다.

## Constraints

a,b,c,d는 c언어의 unsigned int 범위로 주어진다.

## Output Format

구한 unsigned int 자료형의 x를 10진수로 출력한다.

## Sample Input 0
```
301989888 3407872 22016 120
```
## Sample Output 0
```
305419896
```