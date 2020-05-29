#include <iostream>
using namespace std;

class three_d {
private:
	int x, y, z;	// 3-D 좌표
public:
	three_d() { x = y = z = 0; }
	three_d(int i, int j, int k) { x = i, y = j, z = k; }

	friend three_d operator*(three_d op1, three_d op2);	// 곱하기
	friend three_d operator--(three_d &op1);	// 접두사 버전 --
	friend three_d operator--(three_d &op1, int notused);	// 접미사 버전 --

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

	--b;	// 접두사 감소
	b.show();
	b--;	// 접미사 감소
	b.show();

	c = --b;	// c는 감소 후에 b의 값을 받는다
	c.show();	// c와 b는
	b.show();	// 같다.

	c = b--;	// c는 감소에 앞서 b의 값을 받는다
	c.show();	// c와 b는
	b.show();	// 지금 다르다.

	return 0;
}