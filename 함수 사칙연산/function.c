#include <stdio.h>
#include "function.h" 
void p(const char* msg, int n) {
	printf(">>>>>>>>>>>>>>>>\n");
	printf("%s ��� : %d\n", msg, n);
	printf(">>>>>>>>>>>>>>>>\n\n");
}

int showMenu(void) {
	int input;
	printf("���� �Է� : "); scanf_s("%d", &input);
	return input;
}