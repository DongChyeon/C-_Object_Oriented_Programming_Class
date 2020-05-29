// 문제2. 앞에서 사용된 three_d 클래스에서 다음의 연산자를 사용하시오(멤버함수 사용)
#include <iostream>
using namespace std;

class three_d {
private:
	int x, y, z;	// 3-D 좌표
public:
	three_d() { x = y = z = 0; }
	three_d(int i, int j, int k) { x = i; y = j; z = k; }

	three_d operator*(three_d op2);	// op1을 포함하고 있다.
	three_d operator--();	// --의 접두사 버전
	three_d operator--(int notused);	// --의 접미사 버전

	void show();
};

three_d three_d::operator*(three_d op2) {
	three_d temp;
	temp.x = x * op2.x;	// 이 문장들은 정수 곱셈이고
	temp.y = y * op2.y;	// *은 정수 곱셈과 관련된
	temp.z = z * op2.z;	// 원래의 의미를 갖는다.
	return temp;
}

three_d three_d::operator--() {
	x--; y--; z--;
	return *this;	// 변경된 값을 반환
}

three_d three_d::operator--(int notused) {
	three_d temp = *this;
	x--; y--; z--;
	return temp;	// 원래의 값을 반환
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
	c = a * b;	// a와 b를 곱한다.
	c.show();
	c = a * b * c;	// a, b와 c를 곱한다.
	c.show();
	--c;	// 접두사 감소
	c.show();
	c--;	// 접미사 감소
	c.show();
	a = --c;	// a는 감소 후에 c의 값을 받는다.
	a.show();	// a와 b는
	c.show();	// 같다.
	a = c--;	// a는 감소에 앞서 c의 값을 받는다.
	a.show();	// a와 c는
	c.show();	// 지금 다르다.
	return 0;
}