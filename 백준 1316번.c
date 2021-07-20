#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int input;
	int word_count = 0;
	scanf("%d", &input);
	char str[101];

	for (int i = 0; i < input; i++)
	{
		scanf("%s", str);
		int count = strlen(str);
		for (int j = 0; j < count; j++)
		{
			for (int k = j + 2; k < count; k++)
			{
				if (str[j] == str[k])
				{
					if(str[j]!=str[k-1])
						j = count;
				}
			}
			if (j == count - 1)
			{
				word_count++;
			}
		}
	}
	printf("%d", word_count);
}