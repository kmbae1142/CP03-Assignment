# 단어 길이로 정렬

입력받은 단어를 길이 순서로 오름차순 정렬해 출력한다. 두 단어의 길이가 같은 경우 입력 순서대로 출력한다.

## Input Format

입력 첫 줄에 전체 단어의 개수 N이 입력된다.
이후 N개의 단어가 N줄에 걸쳐 입력된다.

이중 포인터를 사용하기 위해 아래 주어진 코드를 기반으로 문제를 해결하시오.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	
    char* arr[100];
    for (int i=0; i<100; i++)
    	arr[i] = (char*)malloc(sizeof(char) * 100); //similar to "arr[i] = char arr2[100]"
    char** dptr;
    /////////////////
    // write your code in this section
    // do not use arr directly, use dptr
    
    /////////////////
    return 0;
}
```

## Constraints

한 단어의 길이 < 100
N < 100

## Output Format

각 줄에 정렬된 단어를 출력한다.

## Sample Input 0
```
3
hello
world!!!
a
```
## Sample Output 0
```
a
hello
world!!!
```