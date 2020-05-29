// 문제1. 빈 라인이 입력될 때까지 문장들을 입력받아 토큰의 수를 계산하는 프로그램을 작성하라.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int count = 0;
	char str[80][80];
	char token[80];
	char* p, * q;
	for (int i = 0; i < 80; i++) {
		cout << "입력: ";
		gets_s(str[i]);
		p = str[i];
		while (*p) {	// p가 가리키는 값이 null일때까지
			q = token;
			while (*p != ' ' && *p) {
				*q = *p;
				q++; p++;
			}
			if (*p) p++;	// 빈칸 건너뛰기
			count++;
		}
		if (!str[i][0]) {
			cout << "총 토큰의 수: " << count;
			break;	// 빈 줄이 입력될 경우 종료
		}
	}
	return 0;
}