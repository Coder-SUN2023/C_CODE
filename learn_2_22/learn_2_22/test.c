
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//两个数字相加
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个数字：");
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("输入的数字的和为%d\n",sum);
//	return 0;
//}


//字符和字符串长度  有没有\0的区别
//int main() {
//	char arr1[] = "bit";
//	char arr2[] = { 'b','i','t' };
//	char arr3[] = { 'b','i','t','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}


//使用函数来计算相加
int Add(int x,int y) 
{
	int z = 0;
	z = x + y;
	return z;
}

int main() 
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);

	int sum = Add(num1, num2);

	printf("%d\n",sum);

	return 0;
}