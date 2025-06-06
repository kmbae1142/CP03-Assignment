#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char name[23];
    int age;
    int serial;
}Person;

int main() {

    int n;
    scanf("%d", &n);
    Person *p = (Person *)malloc(sizeof(Person) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", p[i].name, &p[i].age);
        p[i].serial = i + 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (p[j].age > p[j + 1].age) {
                Person temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", p[i].name, p[i].age, p[i].serial);
    }
    
    return 0;

}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char name[23];
    int age;
    int serial;
}Person;

int main() {

    int n;
    scanf("%d", &n);
    Person *p = (Person *)malloc(sizeof(Person) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", p[i].name, &p[i].age);
        p[i].serial = i + 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (p[j].age > p[j + 1].age) {
                Person temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", p[i].name, p[i].age, p[i].serial);
    }
    
    return 0;

}
