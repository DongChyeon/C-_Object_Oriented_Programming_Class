// 문제1. 사용자가 입력한 영문자, 숫자, 구두점(,.! 3가지)의 개수를 세는 프로그램을 작성하여라. 사용자가 <Enter> 키를 누르면 입력이 중단된다. If 문을 사용하여 문자를 구두점, 숫자, 영문자로 분류하여라. 프로그램이 종료할 때 각각의 개수를 출력하여라.
#include <iostream>
using namespace std;

int main() {
	int english = 0, number = 0, punctuation = 0;
	char text[100];

	cout << "입력 : ";
	gets_s(text);

	for (int i = 0; i < sizeof(text) / sizeof(int); i++) {
		if ((int)text[i] >= 65 && (int)text[i] <= 122) english++;
		else if ((int)text[i] >= 48 && (int)text[i] <= 57) number++;
		else if ((int)text[i] == 44 || (int)text[i] == 46 || (int)text[i] == 33) punctuation++;
	}
	cout << "영문자의 개수는 " << english << endl;
	cout << "숫자의 개수는 " << number << endl;
	cout << "구두점의 개수는 " << punctuation << endl;
	
	return 0;
}