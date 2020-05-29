// 문제1. 다음과 같은 3개의 함수를 중복시키고 main 함수에서 호출해서 결과를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int powerx(int x);
int powerx(int x, int y);
int powerx(int x, int y, int z);

int main() {
	int a = 2, b = 3, c = 4;

	cout << powerx(a) << endl;
	cout << powerx(a, b) << endl;
	cout << powerx(a, b, c) << endl;

	return 0;
}

int powerx(int x) {
	int value;
	value = x * x;

	return value;
}

int powerx(int x, int y) {
	int value = x;
	for (int i = 1; i < y; i++) value *= x;

	return value;
}

int powerx(int x, int y, int z) {
	return powerx(x, y) * z;
}