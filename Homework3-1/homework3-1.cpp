// ����1. 6���� ������ ������ �迭�� �Է¹޾� ���� ���� ���� ã�� 0��° ��ġ�� ���ġ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <iostream>
using namespace std;

int main() {
	int aList[6];
	int temp;

	for (auto &i : aList) {
		cout << "�Է� : ";
		cin >> i;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			if (aList[j] > aList[j + 1]) {
				temp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++)
		cout << aList[i] << " ";

	return 0;
}