// 문제2. 문자열을 뒤집는 rev_str() 함수를 작성하여라. rev_str() 함수가 한 개 혹은 두 개의 문자열을 처리할 수 있게 함수를 중복하여라. 한 개의 문자열로 호출되면, 문자열을 뒤집어서 그 문자열에 넣어서 반환하고, 두 개의 문자열로 호출되면 문자열들을 뒤집은 후 두번째 인수의 문자열에 넣어서 반환한다. 예를 들어 다음과 같다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void rev_str(char s1[]);
void rev_str(char s1[], char s2[]);

int main() {
	char s1[80], s2[80];
	strcpy(s1, "hello");
	rev_str(s1, s2);
	cout << "rev_str(s1, s2) 후의 s1, s2 : ";
	cout << s1 << ' ' << s2 << endl;
	rev_str(s1);
	cout << "rev_str(s1) 후의 s1, s2 : ";
	cout << s1 << ' ' << s2 << endl;
}

void rev_str(char s1[]) {
	char temp;
	for (int i = 0; i < (int)(strlen(s1) / 2); i++) {
		temp = s1[i];
		// cout << i << " " << strlen(s1) - (i + 1) << "\n";	// 널 문자를 고려하자
		s1[i] = s1[strlen(s1) - (i + 1)];
		s1[strlen(s1) - (i + 1)] = temp;
	}
}

void rev_str(char s1[], char s2[]) {
	strcpy(s2, s1);
	rev_str(s2);
}