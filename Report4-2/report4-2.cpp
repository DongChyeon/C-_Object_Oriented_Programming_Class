/* �� �μ� �� ���� ���� ��ȯ�ϴ� min()�̶�� ���ø�Ʈ �Լ��� �ۼ��Ͽ���.
���� ���, min(3, 4)�� 3�� ��ȯ�ϰ� min('c', 'a')�� a�� ��ȯ�Ѵ�. �� �Լ��� ����ϴ�
main�Լ��� �ۼ��϶�.*/
#include <iostream>
using namespace std;

template <class X> X min(X a, X b) {
	if (a < b) return a;
	else return b;
}

int main() {
	cout << min(3, 4) << '\n';
	cout << min('c', 'a') << '\n';

	return 0;
}