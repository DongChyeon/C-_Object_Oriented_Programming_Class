/* ���ø�Ʈ �Լ��� ���� ���� find()��� �Լ��� �ۼ��Ͽ���. �� �Լ��� ���� ã�� ���� �迭�� Ž���Ѵ�.
�� ���� ������ �װ��� ÷�ڸ� ��ȯ�ϰ�, ���ٸ� -1�� ��ȯ�Ѵ�. find()�� ���ø�Ʈ �Լ��� �ۼ��ϰ�
main �Լ����� int, float, char ���� ���� ������ ���ƶ�,(size �Ű������� �迭�� �ִ� ������ ���� ��Ÿ����.) */
#include <iostream>
using namespace std;

template <class X> int find(X object, X* list, int size) {
	for (int i = 0; i < size; i++) {
		if (list[i] == object) return i;
	}
	return -1;
}

int main() {
	int arr1[4] = { 1, 2, 3, 4 };
	float arr2[3] = { 1.2, 3.4, 5.6 };
	char arr3[5] = { 'a', 'b', 'c', 'd', 'e' };

	cout << find(3, arr1, 4) << '\n';
	cout << find((float)1.3, arr2, 3) << '\n';	// 1.2�� double������ �ν��ϱ⿡ ����ȯ
	cout << find('b', arr3, 5) << "\n";

	return 0;
}