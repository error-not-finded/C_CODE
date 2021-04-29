#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	int n = 0;
//	scanf("%c %d", &ch,&n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%c", ch);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	do
//	{
//		
//		scanf("%d", &c);
//		printf("%c\n", c);
//	} 	while (c);
//	return 0;
//}

//int main()
//{
//	int year = 0,mouth = 0,day = 0;
//	scanf("%4d %2d %2d", &year, &mouth, &day);
//	printf("year=%4d\nmouth=%02d\nday=%02d", year, mouth, day);
//	return 0;
//}
////int main()
////{
////	char arr[8] = { 0 };
////	*arr=getchar();
////
////	return 0;
////}

//int main()
//{
//	int num = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//
//		printf("%d\n", 1<<num);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int num = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//
//		printf("%d\n", (int)pow(2,num));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d,%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}


//int main()
//{
//	int c = 0;
//	while ((scanf("%c", &c)) != EOF)
//	{
//		printf("%d\n", c);
//		getchar();
//	}
//	return 0;
//}
int main()
{
	int a = 0, b = 0;
	while ((scanf("%d%d", &a, &b)) != EOF)
	{
		printf("%d,%d", a / b, a % b);
	}
	return 0;
}