//#include<stdio.h>
//int main(void)
//{
//	int a[5] = { 7,2,6,5,1 };
//	printf("%d\n", sizeof(a));//数组大小的计算
//	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
//	printf("%p %p %p %p %p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
//	//%p代表用16进制打印地址 %d代表用十进制打印数据
//	printf("%p %p %p %p %p\n", &a[0], &a[1]+1, &a[2],&a[3],&a[4]);
//	//若a[2]的地址不知道 可以用a[1]+1来表示a[2]的地址 即为地址偏移
//	//当用%d表示地址时 俩数据的地址数值差值为4 因为int类型的空间为四个字节
//	//此处的a代表的数组有5个数 占用20个字节的内存 所以当我们对整个数组加1的时候 地址的十进制差值就是20
//	printf("%d %d", &a, &a + 1);
//	return 0;
//
//}