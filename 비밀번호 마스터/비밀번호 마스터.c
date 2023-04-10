#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//변수 선언, 초기화
	void showIntro(void);
	void showSuccess(void);
	void showFail(void);
	void showExit(void);
	void showEnding(int);
	int showQuestion(int, int, int);
	int getNumber(int);

	//무한 루프 : 입력, 맞는지 틀렸는지 확인, 종료조건 확인
	// 메뉴를 출력
	// 입력 받기
	// 종료 조건이면 break
	// 맞혔으면, success 출력, 다시 반복
	// 틀렸으면, fail 출력, break

	// 몇개 맞혔는지 출력하고 종료
	return 0;
}