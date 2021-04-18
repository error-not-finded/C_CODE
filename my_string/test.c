#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>
#include<string.h>
//char* my_strncpy(char* dest, const char* src, unsigned int count)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (count)
//	{
//		if (*src != 0)
//		{
//			*dest = *src;
//			dest++;
//			src++;
//			count--;
//		}
//		else
//		{
//			*dest = '\0';
//			dest++;
//			count--;
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "qw";
//	int n = 4;
//	strncpy(arr1, arr2, n);
//	char*ch= my_strncpy(arr1,arr2,n);
//	printf("%s", arr1);
//	return 0;
//}


char* my_strncat(char* front, const char* back, unsigned int count)
{
	//assert()
	char* start = front;
	while (*front)
		front++;
	while (*back&&count)
	{
		*front= *back;
		front++;
		back++;
		count--;
	}
	
	*front = '\0';
	return start;
}
int main()
{
	char arr1[30] = "abcdefk\0xxxxxxxxxxx";
	char arr2[] = "qwert";
	int n = 5
;
	my_strncat(arr1, arr2, n);
	printf("%s", arr1);
	return 0;
}