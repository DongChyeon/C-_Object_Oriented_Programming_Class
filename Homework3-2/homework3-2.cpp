// 문제2. 빈 라인이 입력될 때까지 문장들을 입력 받아 문자열에 있는 공백, 콤마, 마침표의 수를 세는 프로그램을 작성하여라. 공백, 콤마, 마침표를 구분하기 위해 switch 문을 사용하여라.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, i;
	int gap = 0, comma = 0, period = 0;
	char text[100][80];
	char character;

	for (t = 0; t < 100; t++) {
		cout << t + 1 << "번째 문장 : ";
		gets_s(text[t]);
		if (text[t][0] == NULL) break;
	}

	for (i = 0; i < 80; i++) {
		for (t = 0; t < 100; t++) {
			character = text[t][i];
			switch(character) {
			case ' ':
				gap++;
				break;
			case ',':
				comma++;
				break;
			case '.':
				period++;
				break;
			}
		}
	}

	cout << "공백의 개수는 " << gap << endl;
	cout << "콤마의 개수는 " << comma << endl;
	cout << "마침표의 개수는 " << period << endl;

	return 0;
}