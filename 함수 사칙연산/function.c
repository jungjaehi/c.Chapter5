#include <stdio.h>
#include "function.h" 
void p(const char* msg, int n) {
	printf(">>>>>>>>>>>>>>>>\n");
	printf("%s 출력 : %d\n", msg, n);
	printf(">>>>>>>>>>>>>>>>\n\n");
}

int showMenu(void) {
	int input;
	printf("숫자 입력 : "); scanf_s("%d", &input);
	return input;
}