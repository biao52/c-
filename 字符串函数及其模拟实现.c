

#include<stdio.h>
#include<assert.h>
#include<string.h>
//int my_strlen(const char* a)
//{
//	assert(a!= NULL);//����
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int main()//ģ��ʵ��strlen����
//{
//	char a[20] = { "he llo" };
//	int ret= my_strlen(a);
//	printf("%d", ret);
//	return 0;
//}





//int my_strlens(char* a)
//{
//	while (*a != '\0')
//	{
//		return 1 + my_strlens(a+1);
//	}
//}
//int main()//�ݹ�ʵ��
//{
//	char a[] = "helloworld";
//	int ret = my_strlens(a);
//	printf("%d", ret);
//	return 0;
//}




//int my_strlens(char* a)
//{
//	char* b = a;
//	while (*b != '\0')
//	{
//		b++;
//	}
//	return b - a;
//}
//int main()//ָ��ʵ��
//{
//	char a[] = "helloworld";
//	int ret = my_strlens(a);
//	printf("%d", ret);
//	return 0;
//}





//void my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)//\0һ��׷��
//	{
//		;
//	}
//}
//int main()//�Լ�ʵ��strcat����
//{
//	char arr1[20] = { "hello " };
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}




//int my_strcmp(const char*dest,const char* src)
//{
//	assert(dest && src);
//	while (*dest == *src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	if (*dest > *src)
//		return 1;
//	else if (*dest < *src)
//		return -1;
//}
//int main()//ģ��ʵ��strcmp����
//{
//	char a[] = "hello";
//	char b[] = "hollo";
//	printf("%d",my_strcmp(a, b));
//	return 0;
//}





//const char* my_strstr(const char* a, const char* b)
//{
//	while (*a != *b)
//	{
//		if (*a == '\0')
//		{
//			return NULL;
//		}
//		a++;
//	}
//	char *c = a;
//	while (*a == *b)
//	{
//		a++;
//		b++;
//		if (*a == '\0'||*b=='\0')
//			return c;
//	}
//	return NULL;
//}
char* my_strstr(const char* str1, const char* str2)
{
	if (*str2 == '\0')
		return str1;
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)cp;
		cp++;
	}
	return NULL;
}
int main()//ģ��ʵ��strstr����
{
	char a[20] = "abbbcdefg";
	char b[20] = "bbc";
	char* ret=my_strstr(a, b);
	if (ret == NULL)
		printf("û�ҵ�");
	else
		printf("%s", ret);
	return 0;
}