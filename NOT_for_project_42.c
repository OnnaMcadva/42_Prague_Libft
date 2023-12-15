#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void delete(int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void search(int key) {
    struct Node* current = head;
    int pos = 1;

    while (current != NULL) {
        if (current->data == key) {
            printf("Node with data %d found at position %d\n", key, pos);
            return;
        }
        current = current->next;
        pos++;
    }

    printf("Node with data %d not found in the list\n", key);
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);

    printf("Initial linked list: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    delete(7);
    printf("Linked list after deleting node with data 7: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    search(1);
    search(7);

    return 0;
}

/*
пример кода для структуры связанного списка с функциями добавления, удаления и поиска узлов.
мы создали структуру Node, которая содержит данные и указатель на следующий узел в списке.
Затем мы определили функции insert, delete и search, которые позволяют добавлять, 
удалять и находить узлы в связанном списке соответственно.
В функции main мы создали несколько узлов, добавили их в список, вывели список на экран, удалили один из узлов, 
вывели список на экран снова и нашли два узла в списке.
*/
