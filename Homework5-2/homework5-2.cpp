// ����2.�ϳ��� ���� �Է¹޾� �� ���� ũ�⸸ŭ �迭�� �������� ������ �� ����ŭ�� ������ �Է¹޾� �迭�� ������ �� �迭�� �� ���ҿ� ���� �ڽź��� ���� ������ ������ ����Ͽ� ����ϱ�.
#include <iostream>
using namespace std;

int main() {
	int* p;
	int n, temp, count;
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	cin >> n;
	p = new int[n];	// ���� �޸� �Ҵ�

	for (int i = 0; i < n; i++) cin >> p[i];

	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < n; j++) {
			if (p[i] > p[j]) count++;
		}
		cout << p[i] << " --> " << count << endl;
	}

	delete p;	// �޸� ����

	return 0;
}