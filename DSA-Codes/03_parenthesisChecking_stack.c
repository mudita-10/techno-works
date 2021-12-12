/*

Created by: Mudita Bhowmick
Program to check whether the parenthesis is balanced or not.

*/

#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    int *array;
};
int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *p, int value)
{
    if (isFull(p))
    {
        printf("Stack overflowed. Cannot push any value into the stack.\n");
    }
    else
    {
        p->top++;
        p->array[p->top] = value;
    }
}
int pop(struct stack *p)
{
    if (isEmpty(p))
    {
        printf("Stack underflowed. Cannot pop any value from the stack.\n");
    }
    else
    {
        int value = p->array[p->top];
        p->top--;
        return value;
    }
}
char check(char a, char b)
{
    if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}
int parenthesisCheck (char *e)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf ("\nEnter the size of stack:\n");
    scanf ("%d", &s->size);
    s->top = -1;
    s->array = (int *)malloc(sizeof(int));
    char popped_value;

    for (int i=0; e[i]!='\0';i++)
    {
        if (e[i] == '(' || e[i] == '{' || e[i] == '[')
        {
            push (s,e[i]);
        }
        else if (e[i] == ')' || e[i] == '}' || e[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped_value = pop(s);
            if(!check(popped_value,e[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    return 0;
}
int main()
{
    char expression[100];
    printf ("\nEnter the expression:\n");
    gets (expression);

    if (parenthesisCheck(expression))
    {
        printf ("The parenthesis is balanced.\n");
    }
    else
    {
        printf ("The parenthesis is unbalanced.\n");
    }
    return 0;
}