#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void Reverse(char* str)
{
	assert(str != NULL);
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
	while(left<right)
	{
		char tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;

	}
}
//	//for (i = 0; i <( sz-1) / 2 + 1; i++)
////	{
//		char tmp = ch[i];
//		ch[i] = ch[sz -1- i];
//		ch[sz - 1-i] = tmp;
//
//	}
//}

int main()
{
	char ch[256] = { 0 };
	//scanf("%s", ch);
	gets(ch);
	printf("%s\n", ch);
	Reverse(ch);
	printf("%s\n", ch);
	return 0;
}
