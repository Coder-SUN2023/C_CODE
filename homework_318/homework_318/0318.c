#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
//#include  <string.h>


//int main( ) {
//	int a = 10;
//	int b = 20;
//	if (a > b) {
//		printf("%d\n", a);
//	}
//	else
//	printf("%d\n", b);
//
//}


//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("大的数是%d\n", a);
//	}
//	else
//		printf("大的数是%d\n", b);
//
//	return 0;
//}


//int MAX(int m, int n) {
//	if (m > n)
//		return m;
//	else
//		return n;
//
//}
//int main() {
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	int m = MAX(a, b);
//
//	printf("较大的值是%d\n", m);
//	return 0;
//
//}

//int main() {
//	printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");
//
//
//	return 0;
//}


int main() {
	int m = 0;

	scanf("%d", &m);

	if (m % 5 == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}