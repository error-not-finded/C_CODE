#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


int main()
{
	struct contact con;
	Initcontact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELE:
			DeleContact(&con);
			break;
		case SEAR:
			searchContact(&con);
			break;
		case MODI:
			modifycontact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			sortcontact(&con);
			break;
		case EXIT:
			return 0;
		default:
			printf("�����������������");
			break;
		}
	}
	while (input);
	return 0;
}