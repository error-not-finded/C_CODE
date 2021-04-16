#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	int i = 1;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (j == i)
			{
				arr[i][j] = 1;
			}
			if (i > 1 && j > 0)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
