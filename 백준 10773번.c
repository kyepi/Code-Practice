#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack[100001];
int count = 0;

void push(int value)
{
    stack[count] = value;
    count++;
}

void pop()
{
    if (count > 0)
    {
        stack[--count] = 0;
    }
}

int main()
{
    int input;
    int num;
    int sum = 0;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            pop();
        }
        else
        {
            push(num);
        }
    }

    for (int i = 0; i < input; i++)
    {
        sum = sum + stack[i];
    }
    printf("%d\n", sum);
}
