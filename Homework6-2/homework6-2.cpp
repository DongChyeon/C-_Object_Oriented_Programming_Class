// 문제2. 다음과 같은 멤버변수와 멤버함수를 갖는 box클래스를 작성하여라.
#include <iostream>
using namespace std;

class box {
private:
	double x, y, z;
	double volume;
public:
	void setbox(double a, double b, double c);	// x = a, y = b, z = c;를 실행
	void calcvolume();	// 부피를 계산하는 함수
	int vol();	// 부피를 반환하는 함수
};

void box::setbox(double a, double b, double c) {
	x = a, y = b, z = c;
}

void box::calcvolume() {
	volume = x * y * z;
}

int box::vol() {
	return volume;
}

int main() {
	double a, b, c;
	box mybox;	// 객체 생성
	cin >> a >> b >> c;
	mybox.setbox(a, b, c);
	mybox.calcvolume();
	cout << "부피는 " << mybox.vol();
}