// ����1. ������ ���� 3���� �Լ��� �ߺ���Ű�� main �Լ����� ȣ���ؼ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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