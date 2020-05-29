// coord는 다음과 같이 정의된다. 이 클래스와 관련된 *와 / 연산자를 중복시켜 보고(멤버함수), 이것이 작동하는 예제 프로그램을 작성하여라.
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// 좌표 값
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	coord operator*(coord op2);	// 멤버함수로 만든
	coord operator/(coord op2);	// 연산자 중복
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
	int x, y;	// get_xy를 통해 coord의 xy를 받아올 변수

	coord a(15, 5), b(5, 5), c;
	a.get_xy(x, y);
	cout << "a는 " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b는 " << x << " " << y << "\n";

	c = a * b;
	c.get_xy(x, y);
	cout << "a * b는 " << x << " " << y << "\n";
	c = a / b;
	c.get_xy(x, y);
	cout << "a / b는 " << x << " " << y << "\n";

	return 0;
}