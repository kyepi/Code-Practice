#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int h, m;
    while (1)
    {
        scanf("%d %d", &h, &m);

        printf("%d %d", (h + 23 + (m + 15) / 60) % 24, (m + 15) % 60);
    }
}