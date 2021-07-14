#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{

	char str[1000001] = { 0, };
	int cnt[26] = { 0, };
	int max = cnt[0];
	char alphabet;
	scanf("%[^\n]s", str);
	int count = strlen(str);



	for (int i = 0; i < count; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}


	for (int i = 0; i < count; i++)
	{
		for (int j = 'A'; j < '['; j++)
		{
			if (str[i] == j)
			{
				cnt[str[i] - 'A']++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			alphabet = i + 65;
		}

		else if (max == cnt[i])
		{
			max = cnt[i];
			alphabet = '?';
		}
	}


	printf("%c", alphabet);
}