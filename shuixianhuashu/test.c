#define _CRT_SECURE_NO_WARNINGS 1
//#include<math.h>
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 0;
//		do
//		{
//					n++;
//		} 		while (tmp/=10);
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow((int)tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("水仙花数 %d ", i);
//		}
//
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	scanf("%d", &line);//一半的行数加一，确保是一个奇数
	int i = 0;
	for (i = 0; i < line; i++)//打印上面的一半
	{
		int j = 0;
		for (j = 0; j < line-1-i; j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0; j < 2*i+1; j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = line; i < 2 * line - 1; i++)
	{
		int j = 0;
		for (j = 0; j < i-line+1; j++)
		{
			printf(" ");
		}
		for (j = 0;j<4*line-2*i-3;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}