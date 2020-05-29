// 문제1. 6개의 정수를 일차원 배열에 입력받아 가장 작은 수를 찾아 0번째 위치에 재배치하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	int aList[6];
	int temp;

	for (auto &i : aList) {
		cout << "입력 : ";
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