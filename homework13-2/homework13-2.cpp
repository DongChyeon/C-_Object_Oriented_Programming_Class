/* 2���� 20������ ���� �ڿ� �α׿� ��� �α׸� ����ϴ� ���α׷��� �ۼ��Ͽ���. �Ҽ��� ���� 5�ڸ���,
�ʵ� �ʺ� 10����, ���ʺ��� ä�������� ���̺��� ������. ����� ��µ� �� + ��ȣ�� ǥ���ϵ���
cout�� �÷��׸� �����ϴ� ���α׷��� �ۼ��Ͽ���. */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	for (int i = 2; i < 21; i++) {
		cout << showpos << left << setprecision(5) << setw(10) 
			<< log(i) << log10(i) << "\n";
	}	// +��ȣ ǥ��, ���ʺ��� ä����, �Ҽ��� ���� 5�ڸ�, �ʵ� �ʺ� 10

	return 0;
}