//#include<stdio.h>
//int main (void)
//{
//	int a[3][2] = { {2,3},{4,5} ,{7,8} };//二维数组的初始化
//	int a[3][2] = {{2,3},
//				   {4,5},
//				   {7,8}};//可以只初始化部分元素 其他的默认为0
//	printf("%d", sizeof(a));
//	int a[2][3] = { {2,3},{4,5} };//每一组未被定义的元素都默认为0
//	int a[2][2] = { 1,2,3 };//此处会自动分组，1与2搭配 3与0搭配
//	int a[][2] = { 2,3,4,5,6,};//此处也会自动分组 只有在初始化的时候才能这样写 同样6与0搭配
//	return 0;
//}