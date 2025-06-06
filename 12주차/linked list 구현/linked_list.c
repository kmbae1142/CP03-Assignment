#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct node{
    int num;
    struct node* PrevNode;
    struct node* NextNode;
}Node;

typedef struct {
    int count;
    Node* headerNode;
    Node* tailNode;
}LinkedList;


LinkedList* createList() {

    LinkedList* newList = (LinkedList*)malloc(sizeof(LinkedList));

    newList->count = 0;
    newList->headerNode = (Node*)malloc(sizeof(Node));
    newList->tailNode = (Node*)malloc(sizeof(Node));
    
    newList->headerNode->PrevNode = NULL;
    newList->headerNode->NextNode = newList->tailNode;

    newList->tailNode->PrevNode = newList->headerNode;
    newList->tailNode->NextNode = NULL;
    
    return newList;

}

void append(LinkedList* list, int num) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* preNode = list->tailNode->PrevNode;

    newNode->num = num;
    newNode->PrevNode = NULL;
    newNode->NextNode = NULL;

    preNode->NextNode = newNode;
    newNode->PrevNode = preNode;
    newNode->NextNode = list->tailNode;
    list->tailNode->PrevNode = newNode;

    list->count++;

}

void clear(LinkedList* list) {
    
    while (list->count != 0) {
        Node* head = list->headerNode;
        Node* delNode = head->NextNode;

        head->NextNode = delNode->NextNode;
        delNode->NextNode->PrevNode = head;
        
        free(delNode);
        list->count--;
    }

}

void delete(LinkedList* list) {
    clear(list);
    free(list);
}

int main() {

    LinkedList* list = createList();
    int num;
    
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        append(list, num);
    }

    Node* currentNode = list->tailNode;
    for (int i = 0; i < list->count; i++) {
        currentNode = currentNode->PrevNode;
        printf("%d\n", currentNode->num);
    }

    delete(list);
    return 0;

}