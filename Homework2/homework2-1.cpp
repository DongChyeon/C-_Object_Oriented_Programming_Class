// ����1. �ϳ��� ���� n ���� �Է¹޾�, n�� �Ҽ�(prime number) �̸� ���Ҽ��Դϴ١�, �ƴϸ� ���Ҽ��� �ƴմϴ١��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 0;

	cout << "���� n�� �Է����ּ���. : ";
	cin >> n;

	for (int i = 1; i < n; i++)
		if (n % i == 0) count++;

	if (count == 1) cout << "�Ҽ��Դϴ�.";
	else cout << "�Ҽ��� �ƴմϴ�.";

	return 0;
}