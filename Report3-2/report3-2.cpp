// coord 클래스와 관련된, ==와 && 연산자를 중복시켜 보고(멤버함수), 이것이 작동하는 예제 프로그램을 작성하여라.
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// 좌표 값
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
	int x, y;	// get_xy를 통해 coord의 xy를 받아올 변수

	coord a(5, 5), b(5, 5), c;
	
	a.get_xy(x, y);
	cout << "a는 " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b는 " << x << " " << y << "\n";
	c.get_xy(x, y);
	cout << "c는 " << x << " " << y << "\n";

	cout << "a && c는 " << (a && c) << endl;
	cout << "a && b는 " << (a && b) << endl;
	cout << "a == b는 " << (a == b) << endl;
	cout << "a == c는 " << (a == c) << endl;

	return 0;
}