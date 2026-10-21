#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    return newNode;
}
int main() {
    struct Node* head = NULL;
    int n, i, x;
    printf("Enter the number of nodes:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the node element:\n");
        scanf("%d", &x);
        head = insertAtBeginning(head, x);
    }
    // Display the linked list
    printf("The linked list is:\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}   