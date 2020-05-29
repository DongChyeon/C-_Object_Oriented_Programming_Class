// 문제2. 1000과 2000 사이에 있는 모든 소수(prime number)를 찾는 프로그램을 작성하여라.
#include <iostream>
using namespace std;

int main() {
	int count;
	int i, j;

	cout << "1000과 2000 사이의 소수는" << endl;

	for (i = 1001; i < 2000; i++) {
		count = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 2) cout << i << " ";
	}

	return 0;
}