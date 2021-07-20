#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int stack[10001];
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
		printf("%d\n", stack[--count]);
	}
	else
	{
		printf("-1\n");
	}
}

void size()
{
	printf("%d\n", count);
}

void empty()
{
	if (count == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

void top()
{
	if (count >= 1)
	{
		printf("%d\n", stack[count - 1]);
	}
	else
	{
		printf("-1\n");
	}
}

int main()
{
	int input;
	scanf("%d", &input);
	int command[10];
	for (int i = 0; i < input; i++)
	{
		scanf("%s", command);
		if (strcmp(command, "push") == 0)
		{
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(command, "pop") == 0)
		{
			pop();
		}
		
		else if (strcmp(command, "size") == 0)
		{
			size();
		}
		else if (strcmp(command, "empty") == 0)
		{
			empty();
		}
		else if (strcmp(command, "top") == 0)
		{
			top();
		}
	}
}