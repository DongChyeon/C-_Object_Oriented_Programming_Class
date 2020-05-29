/* coord 클래스에서 --를 중복하여라(멤버함수).
접두사(prefix)와 접미사(postfix) 표기로 작성해 보아라.
이것이 작동하는 예제 프로그램을 작성하여라.*/
#include <iostream>
using namespace std;

class coord {
private:
	int x, y;	// 좌표 값
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }

	coord operator--();	// --의 접두사 버전
	coord operator--(int notused);	// --의 접미사 버전
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
	int x, y;	// get_xy를 통해 coord의 xy를 받아올 변수

	coord a(15, 10), b;
	a.get_xy(x, y); 
	cout << "a는 " << x << " " << y << "\n";
	a--;
	a.get_xy(x, y);
	cout << "a--는 " << x << " " << y << "\n";
	--a;
	a.get_xy(x, y);
	cout << "--a는 " << x << " " << y << "\n";

	b = --a;
	a.get_xy(x, y);
	cout << "a는 " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b는 " << x << " " << y << "\n";	// a와 b가 같다

	b = a--;
	a.get_xy(x, y);
	cout << "a는 " << x << " " << y << "\n";
	b.get_xy(x, y);
	cout << "b는 " << x << " " << y << "\n";	// a와 b가 다르다.

	return 0;
}