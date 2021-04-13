#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Get_bit(int a)
//{
//	int i = 0;
//	int tmp = 0;
//	int b = 0;
//	for (i = 1;i<32; i+=2)
//	{
//		b= a >> i;
//		tmp = b & 1;
//		//a = a >> 1;
//		printf("%d ",tmp);
//	}
//}


void Print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i ));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	return 0;
}