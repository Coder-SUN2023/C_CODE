
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�����������
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("�������������֣�");
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("��������ֵĺ�Ϊ%d\n",sum);
//	return 0;
//}


//�ַ����ַ�������  ��û��\0������
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


//ʹ�ú������������
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