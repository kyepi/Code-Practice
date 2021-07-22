#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[101];
	scanf("%s", str);
	char a = str[0];
	int count = strlen(str);
	for (int i = 0; i < count; i++)
	{
		if (i == 0)
		{
			printf("%c", str[i]);
		}

		else if (str[i] == 45)
		{
			printf("%c", str[i + 1]);
		}
	}
}