#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int i,front = -1, rear = -1;
char queue[SIZE];

void enqueue(char ch) {
    if (rear == SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = ch;
        printf("Character %c is enqueued.\n", ch);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Dequeued Character: %c\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1; // Reset queue when empty
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Characters in the queue are: ");
        for (i = front; i <= rear; i++) {
            printf("%c ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    char ch;

    while (1) {
        if (scanf("%d", &choice) != 1)
            break;

        switch (choice) {
            case 1:
                scanf(" %c", &ch); // Space before %c to skip whitespace
                enqueue(ch);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}

