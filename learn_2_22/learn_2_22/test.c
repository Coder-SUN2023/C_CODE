
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("请输入两个数字：");
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("输入的数字的和为%d\n",sum);
	return 0;
}

