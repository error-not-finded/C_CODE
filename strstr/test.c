#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	if (*p2 == '\0')
	{
		return p1;
	}
	char* s1 = p1;
	char* s2 = p2;
	char* start = p1;
	while (*start)
	{
		s1 = start;
		s2 = p2;
		while ((s2 != '\0') && (s1 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char str1[] = "abcdefghi";
	char str2[] = "cde";
	char* p = my_strstr(str1, str2);
	printf("%s", p);
	return 0;
}