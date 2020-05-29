// ����1. �ϳ��� ���ڿ��� ���������, �� ���ڿ��� ���õ� ���ڿ� �Լ��� ���� ������ ���� Ŭ������ �����ϰ�, main �Լ����� �� Ŭ������ ��ü�� �����Ͽ� �����غ���.
#define _CRT_SECURE_NO_WARNINGS	// strcpy�� ���� ��� �޼��� ����
#include <iostream>
using namespace std;

class myString {
private:
	char str[80];	// �ϳ��� ���ڿ�
public:
	myString(const char* s);	// 2017�̻���ʹ� const char
	int strlength();
	int numchar(char ch);
};

myString::myString(const char* s) {
	strcpy(str, s);
}	// 2017 �̻���ʹ� const char

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
	cout << "���ڿ� ���� : " << my.strlength() << endl;
	cout << "���� a�� ���� : " << my.numchar('a') << endl;

	return 0;
}