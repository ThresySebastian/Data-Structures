#include <stdio.h>
#include<stdlib.h>
int q[100], i, front = -1, rear = -1, max, d;

void enqueue(int value) 
{
    if ((rear + 1) % max== front) 
    {
        printf("Queue overflow\n");
    } 
    else 
    {
        if (front == -1) 
        {
            front = rear = 0;
        } 
        else 
        {
            rear = (rear + 1) % max;
        }
        q[rear] = value;
        printf("%d inserted into the queue\n", value);
    }
}

void dequeue() 
{
    if (front == -1) 
    {
        printf("Underflow\n");
    } 
    else 
    {
        d= q[front];
        if (front == rear) 
        {
            front = rear = -1;
        } 
        else 
        {
            front = (front + 1) % max;
        }
        printf("%d removed is from the queue\n", d);
    }
}

void display() 
{
    if (front == -1 && rear == -1) 
    {
        printf("Queue is empty\n");
    } else 
    {
        printf("Queue elements are:\n");
        for (i = front; i <=rear; i++) 
        {
            printf("%d  ", q[i]);
        }
    printf("\n");
    }
}

int main() 
{
    int choice, value;
    printf("Enter the queue size: ");
    scanf("%d", &max);

    while (1) 
    {
        printf("\n");
        printf("Queue operations \n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExit\n");
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
