// ����1. �Ϸ��� �ε� �Ҽ� ������ ����� ���ϴ� avg()��� �Լ��� �ۼ��Ͽ���. �� �Լ��� 2���� �μ��� ������. ù��° �μ��� ������ �����ϴ� �迭�� ���� �������̰�, �ι�° �μ��� �迭�� ũ�⸦ ��Ÿ���� �������̴�. �� �Լ��� ����ϱ� ���� ���α׷��� �ۼ��Ͽ���.
#include <iostream>
using namespace std;

float avg(float* arr, int n);

int main() {
	float arr[5] = { 1, 234, 32, 42, 5 };
	cout << "arr[5]�� ����� " << avg(arr, 5) << endl;
}

float avg(float* arr, int n) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum / n;
}