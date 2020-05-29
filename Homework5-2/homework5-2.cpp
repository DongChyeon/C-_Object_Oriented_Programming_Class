// 문제2.하나의 수를 입력받아 그 수의 크기만큼 배열을 동적으로 생성해 그 수만큼의 정수를 입력받아 배열에 저장한 후 배열의 각 원소에 대해 자신보다 작은 수들의 개수를 계산하여 출력하기.
#include <iostream>
using namespace std;

int main() {
	int* p;
	int n, temp, count;
	cout << "배열의 크기를 입력하세요 : ";
	cin >> n;
	p = new int[n];	// 동적 메모리 할당

	for (int i = 0; i < n; i++) cin >> p[i];

	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < n; j++) {
			if (p[i] > p[j]) count++;
		}
		cout << p[i] << " --> " << count << endl;
	}

	delete p;	// 메모리 해제

	return 0;
}