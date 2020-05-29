// 문제1. 하나의 정수 n 값을 입력받아, n이 소수(prime number) 이면 “소수입니다”, 아니면 “소수가 아닙니다”를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 0;

	cout << "정수 n을 입력해주세요. : ";
	cin >> n;

	for (int i = 1; i < n; i++)
		if (n % i == 0) count++;

	if (count == 1) cout << "소수입니다.";
	else cout << "소수가 아닙니다.";

	return 0;
}