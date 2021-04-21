#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void* Getmemery(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str=Getmemery(str);
//	strcpy(str,"hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//
//}
void* Getmemery(void)
{
	char p[] = "abcdef";
	return p;
}
void test(void)
{
	char* str = NULL;
	str = Getmemery();
	printf(str);
}
int main()
{
	test();
	return 0;
}
