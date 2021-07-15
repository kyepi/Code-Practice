#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[101] = { 0, };
	scanf("%s", str);
	int cnt[26] = { 0, };
	for (int i = 0; i < 26; i++)
	{
		cnt[i] = -1;
	}
	int count = strlen(str);
	
	for (int i = 0; i < count; i++)
	{
		if (cnt[str[i] - 'a'] == -1)
		{
			cnt[str[i] - 'a'] = i;
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", cnt[i]);
	}
}