#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[101];
	scanf("%s", str);
	char cnt[26] = { 0. };
	int count = strlen(str);
	
	for (int i = 0; i < count; i++)
	{
		cnt[str[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", cnt[i]);
	}

	
}