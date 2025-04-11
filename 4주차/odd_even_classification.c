#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num[10], even[10], odd[10], j = 0, k = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) even[j++] = num[i];
        else odd[k++] = num[i];
    }
    
    for (int i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    
    if (k > 0) printf("\n");
    
    for (int i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    
    return 0;

}
