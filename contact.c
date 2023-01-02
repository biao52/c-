#include"contact.h"
#include<string.h>
#include<stdio.h>
//������ʵ��
//void initcontact(contact* pc)//��ʼ��ͨѶ¼����̬�汾��
//{
//	pc->sz = 0;
//	//memset��������ʼ��ÿ���ֽ�
//	memset(pc->data, 0, sizeof(pc->data));//ÿ���ֽڳ�ʼ��Ϊ0  Ҳ����pc->date={0};
//}



void initcontact(contact* pc)//��ʼ��ͨѶ¼
{
	pc->data = (peoinfor*)calloc(MAX_NUM,sizeof(peoinfor));
	if (pc->data == NULL)//�жϿռ��Ƿ񿪱ٳɹ�
	{
		perror("initcontact");
		return;
	}
	pc->sz = 0;
	pc->capacity = MAX_NUM;//Ĭ�ϴ�С�ĳ�MAX_NUM
}
//void addcontact(contact* pc)//������ϵ�˸�������̬�汾��
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	printf("���������֣�");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("�������Ա�");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("���������䣺");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������ַ��");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("��������룺");
//	scanf("%s", pc->data[pc->sz].tele);
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}




void addcontact(contact* pc)//������ϵ�˸�������̬�汾��
{
	if (pc->sz == pc->capacity)
	{
		peoinfor* ptr = (peoinfor*)realloc(pc->data, sizeof(peoinfor) * (pc->capacity+ADD));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += ADD;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("addcontact");
			printf("����ʧ��\n");
			return;
		}
	}
	printf("���������֣�");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������ַ��");
	scanf("%s", pc->data[pc->sz].addr);
	printf("��������룺");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("���ӳɹ�\n");
}


//��ӡͨѶ¼
void printcontact(const contact* pc)
{
	printf("%-20s %-4s %-4s %-15s %-12s\n", "����", "�Ա�", "����", "��ַ", "����");//-Ϊ�����
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-4s %-4d %-15s %-12s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}
//������ϵ��
static int findbyname(const contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//�����±�
		}
	}
	return -1;//�Ҳ���
}
//ɾ����ϵ��
void delecontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�� ����ɾ��\n");
		return;
	}
	//�Ȳ���Ҫɾ������ ��Ҫ֪����û�������
	//�Ȳ���
	printf("������Ҫɾ�����˵�����:\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ����ϵ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}
//������ϵ��
void searchcontact(const contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ��˵�����\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-20s %-4s %-4s %-15s %-12s\n", "����", "�Ա�", "����", "��ַ", "����");//��ӡ���ҵ���
		printf("%-20s %-4s %-4d %-15s %-12s\n",
			pc->data[pos].name,
			pc->data[pos].sex,
			pc->data[pos].age,
			pc->data[pos].addr,
			pc->data[pos].tele);
	}
}
//�޸���ϵ��
void modifycontact(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pc->data[pos].name);
		printf("�������Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("���������䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("�������ַ��");
		scanf("%s", pc->data[pos].addr);
		printf("��������룺");
		scanf("%s", pc->data[pos].tele);
		printf("�޸ĳɹ�");
	}

}

//����ͨѶ¼
void destorycontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}