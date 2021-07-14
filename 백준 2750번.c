#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int bubble_sort(int arr[], int count)
{
    int temp;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int input;
    scanf("%d", &input);
    int numArr[1000];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &numArr[i]);
    }

    bubble_sort(numArr, input);
    for (int i = 0; i < input; i++)
    {
        printf("%d\n", numArr[i]);
    }
}
