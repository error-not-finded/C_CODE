#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct Teacher 
//{
//	string name;
//	int age;
//	string id;
//	Student StuArr[5];
//
//};
//int main()
//{
//	Teacher T1 = { "老王",50,"19700202","张三",18,80 ,"李四",18,90,"王五",19,70};
//	cout << T1.name <<" "<< T1.age <<" "<< T1.id <<" "<<
//		T1.StuArr[0].name << " " << T1.StuArr[0].age << " " << T1.StuArr[0].score << endl;
//	cout<<T1.StuArr[1].name << " " << T1.StuArr[1].age << " " << T1.StuArr[1].score << endl;
//	cout<<(T1.StuArr+2)->name << " " <<( T1.StuArr+2)->age << " " << (T1.StuArr+2)->score << endl;
//	system("pause");
//	return 0;
//}


struct Champin
{
	string name;
	int age;
	string sex;
};
//void ChamInfoIput(Champin* plist,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		cout << "英雄姓名 " << "年龄 " << "性别 " << endl;
//		cin >> plist->name >> plist->age >> plist->sex;
//	}
//}
void swap(Champin*left, Champin*right)
{
	Champin temp = *left;
	*left = *right;
	*right = temp;
}

void Sort(Champin*plist,int len)
{
	
	int i = 0;
	for (i = 0; i < len-1; i++)
	{
		Champin* start = plist;
		int j = 0;
		for (j = 0; j < len-1-i; j++)
		{
			if ((start+j)->age > (start +j+1)->age)
			{
				swap(start + j, start + j + 1);
			}
		}
	}
}
void PrintCham(Champin* plist, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << (plist + i)->name << " " << (plist + i)->age << " " << (plist + i)->sex << endl;
	}
}

int main()
{
	Champin list[5]=
	{
		{"刘备",23,"male"},
		{"关羽",22,"male"},
		{"张飞",20,"male"},
		{"赵云",21,"male"},
		{"貂蝉",19,"female"}
	};
	int len = sizeof(list) / sizeof(list[0]);
	//ChamInfoIput(list,len);
	Sort(list, len);
	PrintCham(list, len);
	system("pause");
	return 0;
}