#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>
#include<string.h>
#include "test.h"
char* my_strncpy(char* dest, const char* src, unsigned int count)
{
	assert(dest && src);
	char* start = dest;
	while (count)
	{
		if (*src != 0)
		{
			*dest = *src;
			dest++;
			src++;
			count--;
		}
		else
		{
			*dest = '\0';
			dest++;
			count--;
		}
	}
	return start;
}

int main()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "qw";
	int n = 4;
	char*ch= my_strncpy(arr1,arr2,n);
	printf("%s", arr1);
	return 0;
}