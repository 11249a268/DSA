
#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to insert an element into the queue
void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow! Cannot insert %d\n", item);
        return;
    }
    if (front == -1) { // first element case
        front = 0;
    }
    rear = rear + 1;
    queue[rear] = item;
    printf("%d inserted into queue.\n", item);
}

// Function to delete an element from the queue
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to delete.\n");
        return -1; // NULL equivalent for int
    }
    int item = queue[front];
    front = front + 1;
    return item;
}

// Function to display queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int choice, item;
    while (1) {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            item = dequeue();
            if (item != -1)
                printf("Deleted element: %d\n", item);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
