// 문제1. 하나의 문자열을 멤버변수로, 그 문자열과 관련된 문자열 함수를 갖는 다음과 같은 클래스를 선언하고, main 함수에서 이 클래스의 객체를 생성하여 실행해보라.
#define _CRT_SECURE_NO_WARNINGS	// strcpy로 인한 경고 메세지 무시
#include <iostream>
using namespace std;

class myString {
private:
	char str[80];	// 하나의 문자열
public:
	myString(const char* s);	// 2017이상부터는 const char
	int strlength();
	int numchar(char ch);
};

myString::myString(const char* s) {
	strcpy(str, s);
}	// 2017 이상부터는 const char

int myString::strlength() {
	return strlen(str);
}

int myString::numchar(char ch) {
	int count = 0;
	for (auto i : str) {
		if (i == ch) count++;
	}
	return count;
}

int main() {
	myString my("I am studying C++ language.");
	cout << "문자열 길이 : " << my.strlength() << endl;
	cout << "문자 a의 개수 : " << my.numchar('a') << endl;

	return 0;
}