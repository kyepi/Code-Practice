#define _CRT_SECURE_NO_WARNINGS
#define MAX 100001
#include<stdio.h>
#include<string.h>

int queue[MAX];
int front1 = -1;
int rear = -1;

void push(int value)
{
	rear = (rear + 1) % MAX;
	queue[rear] = value;
}

void pop()
{
	if (front1 == rear)
	{
		printf("-1\n");
	}
	else
	{
		front1 = (front1 + 1) % MAX;
		printf("%d\n", queue[front1]);
	}
}

void size()
{

	printf("%d\n", rear - front1);
}

void empty()
{
	if (rear == front1)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

void front()
{
	if (rear == front1)
	{
		printf("-1\n");
	}
	else
	{
	
		printf("%d\n", queue[(front1+1)]%MAX);
	}
}

void back()
{
	if (rear == front1)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", queue[rear]);
	}
}
int main()
{
	int input;
	int command[10];
	int num;
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
		scanf("%s", command);
		if (strcmp(command, "push") == 0)
		{
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
		else if (strcmp(command, "front") == 0)
		{
			front();
		}
		else if (strcmp(command, "back") == 0)
		{
			back();
		}
		

	}
}