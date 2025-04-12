# strcat reverse

string.h에 정의되어있는 strcat() 함수는 두 개의 문자열을 하나로 이어주는 동작을 수행한다.
strcat과 유사하게 4개의 문자열을 역순으로 이어주는 프로그램을 작성한다.
main() 함수는 아래 양식을 지켜 작성하시오.
```c
int main() {
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    
    char* array[] = {a, b, c, d};
    char result[200];
    ///////////////////
    
    
    // write your code in this section
    // do not use variable a,b,c,d directly
    
    ///////////////////
    
    printf("%s\n", result);
    return 0;
}
```
## Input Format

문자열 4개가 공백으로 구분되어 입력된다.

## Constraints

문자열 S의 길이 < 50

## Output Format

4개의 문자열을 입력 순서의 역순으로 출력하시오.

## Sample Input 0
```
Hello
World!
Im
Fine
```
## Sample Output 0
```
FineImWorld!Hello
```