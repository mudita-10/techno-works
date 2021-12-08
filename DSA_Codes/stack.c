/*

Created by: Mudita Bhowmick
Implement a stack with array as an ADT in a structure with the following functions:
1>create(s) 2>push(s,value) 3>pop(s) 4>peek(s) 5>print(s) 6>isEmpty(s) 7>isFull(s) 8>count(s)

*/

#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *array;
};
struct stack create()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("\nEnter the size of stack:\n");
    scanf("%d", &s->size);
    s->top = -1;
    s->array = (int *)malloc(sizeof(int));
    return *s;
}
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack overflowed. Cannot push any value into the stack.\n");
    }
    else
    {
        s->top++;
        s->array[s->top] = value;
    }
}
int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack underflowed. Cannot pop any value from the stack.\n");
    }
    else
    {
        int value = s->array[s->top];
        s->top--;
        return value;
    }
}
int peek(struct stack *s, int i)
{
    if (i < 0)
    {
        printf("Not a valid position to peek.\n");
        return -1;
    }
    else
    {
        return s->array[i - 1];
    }
}
int print(struct stack *s)
{
    printf("Stack:\n");
    for (int j = 0; j <= s->top; j++)
    {
        printf("%d\n", s->array[j]);
    }
}
int count(struct stack *s)
{
    return s->top + 1;
}
int main()
{
    struct stack p = create();
    struct stack *sp = &p;

    int position, choice = 0, n, i, number;
    while (choice != 9)
    {
        printf("\n\nEnter 1 for pushing.\nEnter 2 for popping.\nEnter 3 for peeking.\nEnter 4 checking if the stack is empty or not.\nEnter 5 for checking if the stack is full or not.\nEnter 6 to get the total count.\nEnter 9 to exit.\n");
        printf("Enter your choice.\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of values you want to push:\n");
            scanf("%d", &n);
            printf("Enter the values:\n");
            for (i = 1; i <= n; i++)
            {
                scanf("%d", &number);
                push(sp, number);
            }
            print(sp);
            break;
        case 2:
            printf("Popping the last value.\n");
            printf("Popped value: %d\n", pop(sp));
            print(sp);
            break;
        case 3:
            printf("Enter the position you want to peek.\n");
            scanf("%d", &position);
            printf("Peeked value: %d\n", peek(sp, position));
            break;
        case 4:
            if (isEmpty(sp))
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("Stack is not empty.\n");
            }
            break;
        case 5:
            if (isFull(sp))
            {
                printf("Stack is full.\n");
            }
            else
            {
                printf("Stack is not full.\n");
            }
            break;
        case 6:
            printf("Total no of values in stack: %d\n", count(sp));
            break;
        case 9:
            break;
        }
    }
    return 0;
}