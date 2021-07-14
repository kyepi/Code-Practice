#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
	char num;
	scanf("%d", &n);
	char* numarr = malloc(sizeof(char) * n);

	scanf("%s", numarr);

	for (int i = 0; i < n; i++)
	{
		sum = sum + numarr[i] - 48;
	}
	printf("%d", sum);
}


