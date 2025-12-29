#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char value)
{
    if (top == MAX - 1)
    {
        printf("stack is full");
        return 0;
    }
    else
    {
        stack[++top] = value;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}

int priority(char a)
{
    if (x == '()')
    {
        return 0;
    }

    else if (x == '+' || x == '-')
    {
        return 1;
    }

    else if (x == '*' || x == '/')
    {
        return 2;
    }

    else if (x == '^')
    {
        return 3;
    }

    return 0;
}

void convert(char infix[], char postfix[])
{
    int i = 0;
    j = 0;
    char x;

    while (infix[i] != '/0')
    {
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }

        else if (infix[i] == '(')
        {
            push(infix[i]);
        }

        else if (infix[i] == ')')
        {
            while ((x = pop()) != '(')
            {
                postfix[j++] = x;
            }
        }

        else
            (priority(stack[top]) >= priority(infix[i]))
            {
                postfix[j++] = pop();
            }
        push(infix[i]);

        i++;
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}