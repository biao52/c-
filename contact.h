#pragma once
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX 1000
#define MAX_ADDR 30
#define MAX_NUM 3
#define ADD 2//����
//ͷ�ļ��������Ͷ���ͺ�������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//���͵Ķ���
typedef struct peoinfor//�����ض���
{
	char name[MAX_NAME];//����
	char sex[MAX_SEX];
	int age;
	char addr[MAX_ADDR];
	char tele[MAX_TELE];//�绰
}peoinfor;


//����ͨѶ¼(��̬�汾��
//typedef struct contact
//{
//	peoinfor data [MAX];//�����ӵĽ������˵���Ϣ
//	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
//}contact;



//��̬�汾����ͨѶ¼
typedef struct contact
{
	peoinfor* data;//ָ��̬���ٵ���ʼ��ַ
	int sz;//��¼��ǰ���е���ϵ�˵ĸ���
	int capacity;//��¼��ǰ��ͨѶ¼������
}contact;



//��ʼ��ͨѶ¼
void initcontact(contact* pc);
//������ϵ�˸���
void addcontact(contact* pc);
//��ӡ��ϵ��
void printcontact(const contact*pc);
//ɾ����ϵ��
void delecontact(contact* pc);
//������ϵ��
void searchcontact(const contact* pc);
//�޸�ָ����ϵ��
void modifycontact(contact* pc);
//�˳�ͨѶ¼
void destorycontact(contact* pc);