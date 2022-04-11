
#include <stdio.h>
 
#define MAX 50
 
void enqueue(int
    scanf("%d", &n);
    enqueue(n);
    scanf("%d", &n);
    dequeue(n);
    display();
    
} 
 
void enqueue(int n)
{
    int add_item,j;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        for(j=0;j<n;j++)
        {
            if (front == - 1)
            /*If queue is initially empty */
            front = 0;
            scanf("%d", &add_item);
            rear = rear + 1;
            queue_array[rear] = add_item;
        }
    }
} 
 
void dequeue(int n)
{
    int k;
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        for(k=0;k<n;k++)
        {
            printf("Element deleted from queue is : %d\n", queue_array[front]);
            front = front + 1;
        }
    }
} 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 
this is first code

First code
