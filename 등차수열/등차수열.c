#include <stdio.h>

//int main(void) {
//	int n = 0;
//	printf("등차수열의 번호를 입력 : "); scanf_s("%d", &n);
//
//	printf("a_%d의 값은 %d입니다. ", n, adding(n));
//
//
//	return 0;
//}
//
//int adding(int num) {
//	if (num == 1) return 1;
//	else return (adding(num - 1) + 2);
//
//}

int adding(int);
int facto(int);
int fibo(int);

int main(void) {
	int n;
	printf("수열의 번호를 입력 : "); scanf_s("%d", &n);
	printf("등차수열 a_%d의 값은 %d입니다.\n ", n, adding(n));
	printf("팩토리얼 a_%d의 값은 %d입니다.\n ", n, facto(n));
	printf("피보나치 a_%d의 값은 %d입니다.\n ", n, fibo(n));

	return 0;
}
int adding(int num) {
	if (num == 1) return 1;
	else return (adding(num - 1) + 2);
}
int facto(int num) {
	if (num == 1) return 1;
	else return (num * facto(num - 1));
}
int fibo(int num) {
	if (num == 1) return 1;
	else return (fibo(num - 1) + fibo(num - 2));
}

