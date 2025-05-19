# my_realloc

할당한 메모리의 크기를 변경하는 realloc() 함수를 malloc()을 사용해 구현하시오.

```c
void* realloc(void* memblock, size_t size);
```

realloc 함수는 변경할 메모리의 주소와 크기를 입력받아 해당 주소의 크기를 변경한다.

이와 비슷하게, 정수 배열을 입력받아 크기를 변경하는 my_realloc 함수를 작성하고, 아래 조건을 수행할 수 있는 프로그램을 작성하시오.

1. 배열의 크기와 배열의 구성 요소를 입력받아 저장한다.

2. 변경할 배열 크기를 입력받아 배열 크기를 변경한다.

3. 크기가 변경된 배열에 추가 요소를 입력받아 저장하고, 전체 배열 요소를 출력한다.

아래 코드를 사용하여 작성하시오.

```c
#include <stdio.h>
#include <stdlib.h>

int* my_realloc(int* old, int old_size, int new_size);

int main() {

    int n, m;
    int* array;

    return 0;
}

int* my_realloc(int* old_array, int old_size, int new_size) {
   
    
  
}
```

## Input Format

첫 번째 줄에는 배열의 크기가 주어진다. 두 번째 줄에는 배열의 구성 요소가 공백으로 구분되어 주어진다. 세 번째 줄에는 변경할 배열의 크기가 주어진다. 네 번째 줄에는 추가할 요소가 공백으로 구분되어 주어진다.

## Constraints

배열 크기 n, 변경할 배열 크기 m은 모두 정수이며, 0 < n,m

free() 함수를 반드시 사용하시오.

## Output Format

변경한 배열 요소 전체를 공백으로 구분하여 출력한다.

## Sample Input 0
```
3
1 2 3
5
4 5
```
## Sample Output 0
```
1 2 3 4 5
```