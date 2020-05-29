/* coord Ŭ�������� --�� �ߺ��Ͽ���(����Լ�).
���λ�(prefix)�� ���̻�(postfix) ǥ��� �ۼ��� ���ƶ�.
�̰��� �۵��ϴ� ���� ���α׷��� �ۼ��Ͽ���.*/
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// ��ǥ ��
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	coord operator--();	// --�� ���λ� ����
	coord operator--(int notused);	// --�� ���̻� ����
};

coord coord::operator--() {
	x--; y--;
	return *this;
}

coord coord::operator--(int notused) {
	coord temp = *this;
	x--; y--;
	return temp;
}

int main() {
	int x, y;	// get_xy�� ���� coord�� xy�� �޾ƿ� ����

	coord a(15, 10), b;
	a.get_xy(x, y); 
	cout << "a�� " << x << " " << y << "\n";
	a--;
	a.get_xy(x, y);
	cout << "a--�� " << x << " " << y << "\n";
	--a;
	a.get_xy(x, y);
	cout << "--a�� " << x << " " << y << "\n";

	b = --a;
	a.get_xy(x, y);
	cout << "a�� " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b�� " << x << " " << y << "\n";	// a�� b�� ����

	b = a--;
	a.get_xy(x, y);
	cout << "a�� " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b�� " << x << " " << y << "\n";	// a�� b�� �ٸ���.

	return 0;
}