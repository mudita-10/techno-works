/*

Created by: Mudita Bhowmick
Implement an expression evaluator with first infix to postfix conversion and then postfix evaluation.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *array;
};
int stackTop(struct stack *p)
{
    return p->array[p->top];
}
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
int precedence (char c)
{
    if (c == '*' || c == '/')
    return 2;
    else if (c == '+' || c== '-')
    return 1;
    else
    return 0;
}
int isOperator (char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
    return 1;
    else
    return 0;
}
char *infixtopostfix (char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->array = (char*)malloc(sp->size*sizeof(char));
    char *postfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0, j=0;
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] ='\0';
    return postfix;
}
int evaluation(char *postfix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->array = (char*)malloc(sp->size*sizeof(char));
    int i = 0, x1, x2, result = 0;
    for (i=0; postfix[i]!='\0'; i++)
    {
        if(!isOperator(postfix[i]))
        {
            push(sp,postfix[i] - '0');
        }
        else
        {
            x1 = pop(sp);
            x2 = pop(sp);
            switch(postfix[i])
            {
                case '+':
                result = x1+x2;
                break;
                case '-':
                result = x1-x2;
                break;
                case '*':
                result = x1*x2;
                break;
                case '/':
                result = x1/x2;
                break;
            }
            push (sp,result);
        }
    }
    return stackTop(sp);
}
int main()
{
    char infix[100];
    printf ("\nEnter the infix expression:\n");
    gets (infix);
    
    printf ("Postfix expression: %s\n", infixtopostfix(infix));
    printf ("Result after evaluation: %d\n", evaluation(infixtopostfix(infix)));
    return 0;
}