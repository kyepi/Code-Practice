#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, x;
	int num;
	scanf("%d %d", &n, &x);

	int* numPtr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		numPtr[i] = num;
	}

	for (int j = 0; j < n; j++)
	{
		if (numPtr[j] < x)
		{
			printf("%d ", numPtr[j]);
		}
	}
	free(numPtr);
}