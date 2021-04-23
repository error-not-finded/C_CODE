#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("*****************************************\n");
	printf("****** 1. add           2. del    *******\n");
	printf("****** 3. search        4. modify *******\n");
	printf("****** 5. show          6. sort   *******\n");
	printf("****** 0. exit                    *******\n");
	printf("*****************************************\n");
}

void Initcontact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����");
	}
	else
	{
		printf("����������");
		scanf("%s",ps->data[ps->size].name);
		printf("����������");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰");
		scanf("%s",ps->data[ps->size].tele );
		printf("�������ַ");
		scanf("%s", ps->data[ps->size].address);
		
		ps->size++;
		printf("�����ϵ�˳ɹ�");
	}
}

static int FindbyName(const struct contact* ps, char name[MAX_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
//static int FindByName(const struct contact* ps, char name[MAX_name])
//{
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (0 == strcmp(ps->data[i].name, name))
//		{
//			return i;
//		}
//	}
//
//	return -1;//�Ҳ��������
//}
void DeleContact(struct contact* ps)
{
	char name[MAX_name];
	printf("������Ҫɾ������ϵ������>:");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�");
	}
}

void searchContact(struct contact* ps)
{
	char name[MAX_name];
	printf("����Ҫ���ҵ��˵�����>:");
	scanf("%s", name);
	int pos=FindbyName(ps, name);
	if (pos==-1)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-6s\t%-20s\n",
			"����","����","�绰","�Ա�","��ַ");
		printf("%-20s\t%-4d\t%-12s\t%-6s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].tele,
			ps->data[pos].sex,
			ps->data[pos].address);
	}
}
void modifycontact(struct contact* ps)
{
	char name[MAX_name];
	printf("������Ҫ�޸���ϵ�˵�����");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (-1 == pos)
	{
		printf("��ϵ�˲�����");
	}
	else
	{
		printf("����������");
		scanf("%s", ps->data[pos].name);
		printf("����������");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ");
		scanf("%s", ps->data[pos].address);
		
		printf("�޸ĳɹ�");
	}

}
void showcontact(struct contact* ps)
{
	if (0 == ps->size)
	{
		printf("ͨ��¼Ϊ��");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-6s\t%-20s\n",
			"����", "����", "�绰", "�Ա�", "��ַ");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{

			printf("%-20s\t%-4d\t%-12s\t%-6s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].sex,
				ps->data[i].address);
		}
	}
}

void sortcontact(struct contact* ps)
{
	return 0;
}




//struct contact* add()
//{
//	struct contact* p = malloc(72);
//	scanf("%s %s %d %s %d", p->name, p->tele, p->sex, p->address, p->age);
//	return p;
//
//}
