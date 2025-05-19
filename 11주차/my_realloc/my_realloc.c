#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* my_realloc(int* old, int old_size, int new_size);

int main() {

    int n, m;
    scanf("%d", &n);
    int* array = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    
    scanf("%d", &m);
    
    array = my_realloc(array, n, m);
    
    for (int i = n; i < m; i++) scanf("%d", &array[i]);
    
    for (int i = 0; i < m; i++) printf("%d ", array[i]);

    return 0;
}

int* my_realloc(int* old_array, int old_size, int new_size) {
   
    int* new_array = (int*)malloc(sizeof(int) * new_size);
    for (int i = 0; i < old_size; i++) {
        new_array[i] = old_array[i];
    }
    
    free(old_array);
    return new_array;
  
}
