#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void rotata(char ch[],const char tmp[], const int len,const int n)
{
	int i = 0;
	for (i = 0; i < len-n; i++)
	{
		ch[i] = tmp[i + n];
	}
	for (i = 0; i < n; i++)
	{
		ch[len-n+i] = tmp[i];
	}
}
int main()
{
	char ch [20]= { 0 };
	char tmp[20] = { 0 };
	int n = 0;
	scanf("%s\n %d", ch,&n);
	
	strcpy(tmp, ch);
	int len =strlen(ch);
	rotata(ch,tmp, len,n);
	printf("%s\n", ch);
	return 0;
}