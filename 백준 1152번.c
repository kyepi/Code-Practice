#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int count = 1;
	char str[1000001];
	scanf("%[^\n]s", str);


	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}

	}
	if (str[0] == ' ')
		count = count - 1;
	if (str[strlen(str)-1] == ' ')
		count = count - 1;
	printf("%d", count);

}
