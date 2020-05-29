#include <iostream>
using namespace std;

class three_d {
private:
	int x, y, z;	// 3-D ��ǥ
public:
	three_d() { x = y = z = 0; }
	three_d(int i, int j, int k) { x = i, y = j, z = k; }

	friend three_d operator*(three_d op1, three_d op2);	// ���ϱ�
	friend three_d operator--(three_d &op1);	// ���λ� ���� --
	friend three_d operator--(three_d &op1, int notused);	// ���̻� ���� --

	void show();
};

three_d operator*(three_d op1, three_d op2) {
	three_d temp;

	temp.x = op1.x * op2.x;
	temp.y = op1.y * op2.y;
	temp.z = op1.z * op2.z;
	return temp;
}

three_d operator--(three_d &op1) {
	op1.x--;
	op1.y--;
	op1.z--;
	return op1;
}

three_d operator--(three_d &op1, int notused) {
	three_d temp = op1;

	op1.x--;
	op1.y--;
	op1.z--;
	return temp;
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
	c.show();

	--b;	// ���λ� ����
	b.show();
	b--;	// ���̻� ����
	b.show();

	c = --b;	// c�� ���� �Ŀ� b�� ���� �޴´�
	c.show();	// c�� b��
	b.show();	// ����.

	c = b--;	// c�� ���ҿ� �ռ� b�� ���� �޴´�
	c.show();	// c�� b��
	b.show();	// ���� �ٸ���.

	return 0;
}