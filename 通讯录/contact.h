#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
#define MAX_name 20
#define MAX_tele 12
#define MAX_sex 6
#define MAX_addr 20
struct PeoInfo
{
	char name[MAX_name];
	int age;
	char tele[MAX_tele];
	char sex[MAX_sex];
	char address[MAX_addr];
	
};
void menu();

struct contact
{
	struct PeoInfo data[MAX];
	int size;
};
void Initcontact(struct contact*ps);

enum option
{
	EXIT,
	ADD,
	DELE,
	SEAR,
	MODI,
	SHOW,
	SORT
	};


void AddContact(struct contact*ps);

void DeleContact(struct contact*ps);

void searchContact(struct contact*ps);

void modifycontact(struct contact*ps);

void showcontact(struct contact*ps);

void sortcontact(struct contact* ps);
//enum sex
//{
//	male,
//	female,
//	secret
//};

//struct contact* add()
//{
//	struct contact* p = malloc(72);
//	scanf("%s %s %d %s %d", p->name, p->tele, p->sex, p->address, p->age);
//	return p;
//
//}
