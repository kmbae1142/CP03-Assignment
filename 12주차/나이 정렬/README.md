# 나이 정렬

사람들의 정보가 주어지면, 해당 정보를 사람의 나이를 기준으로 오름차순 정렬하여 출력하세요.

사람의 정보는 나이, 이름, 일련번호로 구성됩니다.

나이와 이름은 주어지며, 일련번호는 입력된 순서에 따라 부여됩니다.

## Input Format

첫 번째 줄에 사람의 수가 주어집니다. 두 번째 줄부터 이름과 나이가 공백을 기준으로 주어집니다.

## Constraints

이름은 알파벳 대소문자로 구성되며 20자 이하입니다. 사람들의 나이는 0세 이상 150세 이하입니다. 일련번호는 1부터 시작하여 1씩 증가합니다. 구조체를 사용해 구현하세요.

## Output Format

나이를 기준으로 오름차순으로 사람들의 정보를 출력합니다. 이름, 나이, 일련번호를 각 줄에 공백으로 구분하여 출력하세요.

## Sample Input 0
```
3
Alice 30
Bob 25
Charlie 30
```
## Sample Output 0
```
Bob 25 2
Alice 30 1
Charlie 30 3
```