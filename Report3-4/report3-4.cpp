// ������ �Լ��� �̿��Ͽ� coord Ŭ������ ���õ� - �����ڿ� / �����ڸ� �ߺ��Ͽ� ���ƶ�. �̰��� �۵��ϴ� ���� ���α׷��� �ۼ��Ͽ���.
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// ��ǥ ��
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	friend coord operator-(coord op1, coord op2);
	friend coord operator/(coord op1, coord op2);
};

coord operator-(coord op1, coord op2) {
	coord temp;

	temp.x = op1.x - op2.x;
	temp.y = op1.y - op2.y;
	return temp;
}

coord operator/(coord op1, coord op2) {
	coord temp;

	temp.x = op1.x / op2.x;
	temp.y = op1.y / op2.y;
	return temp;
}


int main() {
	int x, y;	// get_xy�� ���� coord�� xy�� �޾ƿ� ����

	coord a(15, 5), b(5, 5), c;
	a.get_xy(x, y);
	cout << "a�� " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b�� " << x << " " << y << "\n";

	c = a - b;
	c.get_xy(x, y);
	cout << "a - b�� " << x << " " << y << "\n";
	c = a / b;
	c.get_xy(x, y);
	cout << "a / b�� " << x << " " << y << "\n";

	return 0;
}