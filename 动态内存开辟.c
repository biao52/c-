#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����10�����οռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", p[i]);
	}
	//�ͷſռ�
	free(p);;//���Ὣp�Զ��ĳɿ�ָ��
	p = NULL;
	return 0;
}


int main()
{
	//int* p = (int*)malloc(10 * sizeof(int));//malloc�����ʼ�����ٵĿռ�
	int* p = (int*)calloc(10,sizeof(int));//��calloc�Ὣ���ٵĿռ��ʼ��Ϊ0
	int i = 0;
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}//�����ʱ���ٵĿռ䲻��
	int *p1=(int*)realloc(p, 15 * sizeof(int));//realloc�����¿���֮ǰ���ٵ��ڴ�� ����Ϊָ���ֽڴ�С
	free(p);
	p = NULL;
	return 0;
}



