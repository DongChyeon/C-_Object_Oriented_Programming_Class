// coord�� ������ ���� ���ǵȴ�. �� Ŭ������ ���õ� *�� / �����ڸ� �ߺ����� ����(����Լ�), �̰��� �۵��ϴ� ���� ���α׷��� �ۼ��Ͽ���.
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// ��ǥ ��
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	coord operator*(coord op2);	// ����Լ��� ����
	coord operator/(coord op2);	// ������ �ߺ�
};

coord coord::operator*(coord op2) {
	coord temp;
	temp.x = x * op2.x;
	temp.y = y * op2.y;
	return temp;
}

coord coord::operator/(coord op2) {
	coord temp;
	temp.x = x / op2.x;
	temp.y = y / op2.y;
	return temp;
}

int main() {
	int x, y;	// get_xy�� ���� coord�� xy�� �޾ƿ� ����

	coord a(15, 5), b(5, 5), c;
	a.get_xy(x, y);
	cout << "a�� " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b�� " << x << " " << y << "\n";

	c = a * b;
	c.get_xy(x, y);
	cout << "a * b�� " << x << " " << y << "\n";
	c = a / b;
	c.get_xy(x, y);
	cout << "a / b�� " << x << " " << y << "\n";

	return 0;
}