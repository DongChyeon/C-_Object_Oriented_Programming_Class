// ����2. 1000�� 2000 ���̿� �ִ� ��� �Ҽ�(prime number)�� ã�� ���α׷��� �ۼ��Ͽ���.
#include <iostream>
using namespace std;

int main() {
	int count;
	int i, j;

	cout << "1000�� 2000 ������ �Ҽ���" << endl;

	for (i = 1001; i < 2000; i++) {
		count = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 2) cout << i << " ";
	}

	return 0;
}