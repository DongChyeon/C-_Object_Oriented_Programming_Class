// coord Ŭ������ ���õ�, ==�� && �����ڸ� �ߺ����� ����(����Լ�), �̰��� �۵��ϴ� ���� ���α׷��� �ۼ��Ͽ���.
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// ��ǥ ��
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	bool operator==(coord op2);
	bool operator&&(coord op2);
};

bool coord::operator==(coord op2) {
	if (x == op2.x && y == op2.y) {
		return true;
	}
	else { return false; }
}

bool coord::operator&&(coord op2) {
	if (x && op2.x && y && op2.y) {
		return true;
	}
	else { return false; }
}

int main() {
	int x, y;	// get_xy�� ���� coord�� xy�� �޾ƿ� ����

	coord a(5, 5), b(5, 5), c;
	
	a.get_xy(x, y);
	cout << "a�� " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b�� " << x << " " << y << "\n";
	c.get_xy(x, y);
	cout << "c�� " << x << " " << y << "\n";

	cout << "a && c�� " << (a && c) << endl;
	cout << "a && b�� " << (a && b) << endl;
	cout << "a == b�� " << (a == b) << endl;
	cout << "a == c�� " << (a == c) << endl;

	return 0;
}