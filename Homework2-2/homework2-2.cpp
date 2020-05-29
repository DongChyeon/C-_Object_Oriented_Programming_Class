// 문제2. 1에서 10까지의 수들을 아래와 같이 출력하는 프로그램을 작성하여라. 이때 수들 사이를 탭(tab) 간격만큼 띄워라.
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << '\t';
		}
		cout << '\n';
	}
	return 0;
}