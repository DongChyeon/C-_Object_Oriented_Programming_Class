// ����2. 1���� 10������ ������ �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͽ���. �̶� ���� ���̸� ��(tab) ���ݸ�ŭ �����.
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << '\t';
		}
		cout << '\n';
	}
	return 0;
}