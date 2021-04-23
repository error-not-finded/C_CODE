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
		printf("通讯录已满，无法添加");
	}
	else
	{
		printf("请输入名字");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话");
		scanf("%s",ps->data[ps->size].tele );
		printf("请输入地址");
		scanf("%s", ps->data[ps->size].address);
		
		ps->size++;
		printf("添加联系人成功");
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
//	return -1;//找不到的情况
//}
void DeleContact(struct contact* ps)
{
	char name[MAX_name];
	printf("请输入要删除的联系人名字>:");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (pos == -1)
	{
		printf("联系人不存在");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功");
	}
}

void searchContact(struct contact* ps)
{
	char name[MAX_name];
	printf("输入要查找的人的名字>:");
	scanf("%s", name);
	int pos=FindbyName(ps, name);
	if (pos==-1)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-6s\t%-20s\n",
			"姓名","年龄","电话","性别","地址");
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
	printf("请输入要修改联系人的名字");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (-1 == pos)
	{
		printf("联系人不存在");
	}
	else
	{
		printf("请输入名字");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址");
		scanf("%s", ps->data[pos].address);
		
		printf("修改成功");
	}

}
void showcontact(struct contact* ps)
{
	if (0 == ps->size)
	{
		printf("通信录为空");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-6s\t%-20s\n",
			"姓名", "年龄", "电话", "性别", "地址");
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
