#include<stdio.h>
#include"contact.h"
//�پ�̬�汾
//Ҫ��ͨѶ¼����1000���˵���Ϣ
//1.��Ϣ�������� �绰���� �Ա� ��ַ
//2.��������/ɾ��/�޸�/����ָ���˵���Ϣ
//3.������Ա����Ϣ



//�ڶ�̬�汾
//1.ͨѶ¼��ʼ��ʱ���3���˵���Ϣ
//2.������ʱ��������2���˵���Ϣ
void menu()
{
	printf("1.add\n");
	printf("2.dele\n");
	printf("3.search\n");
	printf("4.modify\n");
	printf("5.sort\n");
	printf("6.print\n");
	printf("0.exit\n");
}
enum option
{
	EXIT,
	add,
	dele,
	search,
	modify,
	sort,
	print,
};
int main()
{
	menu();
	int input = 0;
	//����ͨѶ¼
	contact con;
	//��ʼ��ͨѶ¼
	initcontact(&con);//������ͨѶ¼���г�ʼ�� ��data�����ڶ��������������Ŀռ�

	do
	{
		printf("��ѡ����������\n");
		scanf("%d", &input);
		switch (input)
		{
		case add://���ӳ�Ա����Ϣ  ����֪��ͨѶ¼�еı�������Ա����
			addcontact(&con);
			break;
		case dele:
			delecontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case sort:
			break;
		case print:
			printcontact(&con);
			break;
		case EXIT:
			destorycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
		
	} while (input);
	return 0;
}
