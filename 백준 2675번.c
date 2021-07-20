#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input;
	int repeat = 0;
	scanf("%d", &input);
	char str[21];
	
	

	for (int i = 0; i < input; i++)
	{
		scanf("%d %s", &repeat,str);
		
		int count = strlen(str);
		for (int j = 0; j < count; j++)
		{
			for (int k = 0; k < repeat; k++)
			{
				printf("%c", str[j]);
			}

		}
		printf("\n");
	}
}