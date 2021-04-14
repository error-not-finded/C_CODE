#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Sum(int a, int n)
{
	int i = 0;
	int ret = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		ret += tmp;
	}
	return ret;
}
	//	int j = 1;
	//	int tmp = n;
	//	int num = n;
	//	for (j=1;j<i;j++)
	//	{
	//		tmp = tmp * 10;
	//		num += tmp;
	//	}
	//	ret += num;
	//}
//	return ret;
//}
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d",&a, &n);
	int Sn = Sum(a,n);
	printf("%d\n", Sn);
	return 0;
}
