# indexof

문자열 S1에 문자열 S2가 몇 번째 인덱스에서 나타나는지 출력한다.
S2가 S1에 존재하지 않으면 -1을 출력한다.

## Input Format

첫 번째 줄에 문자열 S1이 입력된다.
두 번째 줄에 문자열 S2가 입력된다.

## Constraints

0 < S1의 길이 < 1024
0 < S2의 길이 < 1024
S2가 S1에 여러 번 등장하는 경우 가장 첫 번째 인덱스를 출력한다.

문자열 S1과 S2를 인자로 받아 int를 반환하는 함수 indexof()를 작성하여 문제를 해결한다.
라이브러리에 존재하는 indexof와 유사한 기능을 하는 함수를 사용하지 않는다.

## Output Format

정수를 출력한다.

## Sample Input 0
```
helloworld!
wor
```
## Sample Output 0
```
5
```
## Sample Input 1
```
helloworld!
word
```
## Sample Output 1
```
-1
```