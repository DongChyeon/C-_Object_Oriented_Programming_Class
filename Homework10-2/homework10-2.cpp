// ����2. �տ��� ���� three_d Ŭ�������� ������ �����ڸ� ����Ͻÿ�(����Լ� ���)
#include <iostream>
using namespace std;

class three_d {
private:
	int x, y, z;	// 3-D ��ǥ
public:
	three_d() { x = y = z = 0; }
	three_d(int i, int j, int k) { x = i; y = j; z = k; }

	three_d operator*(three_d op2);	// op1�� �����ϰ� �ִ�.
	three_d operator--();	// --�� ���λ� ����
	three_d operator--(int notused);	// --�� ���̻� ����

	void show();
};

three_d three_d::operator*(three_d op2) {
	three_d temp;
	temp.x = x * op2.x;	// �� ������� ���� �����̰�
	temp.y = y * op2.y;	// *�� ���� ������ ���õ�
	temp.z = z * op2.z;	// ������ �ǹ̸� ���´�.
	return temp;
}

three_d three_d::operator--() {
	x--; y--; z--;
	return *this;	// ����� ���� ��ȯ
}

three_d three_d::operator--(int notused) {
	three_d temp = *this;
	x--; y--; z--;
	return temp;	// ������ ���� ��ȯ
}

void three_d::show() {
	cout << x << ", ";
	cout << y << ", ";
	cout << z << '\n';
}

int main() {
	three_d a(1, 2, 3), b(10, 10, 10), c;
	a.show();
	b.show();
	c = a * b;	// a�� b�� ���Ѵ�.
	c.show();
	c = a * b * c;	// a, b�� c�� ���Ѵ�.
	c.show();
	--c;	// ���λ� ����
	c.show();
	c--;	// ���̻� ����
	c.show();
	a = --c;	// a�� ���� �Ŀ� c�� ���� �޴´�.
	a.show();	// a�� b��
	c.show();	// ����.
	a = c--;	// a�� ���ҿ� �ռ� c�� ���� �޴´�.
	a.show();	// a�� c��
	c.show();	// ���� �ٸ���.
	return 0;
}