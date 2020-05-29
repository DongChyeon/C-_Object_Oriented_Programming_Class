// 문제1. 하나의 좌표를 나타내는 point 클래스를 정의하라. 생성자 함수는 x와 y의 초기값을 매개변수로 받아들인다. 
#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int x, int y);
	float origin_distance();
};

point::point(int x, int y) {
	this->x = x;
	this->y = y;
}

float point::origin_distance() {
	return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
	point p1(3, 4), p2(-1, -5);
	cout << "p1의 원점거리 = " << p1.origin_distance() << endl;
	cout << "p2의 원점거리 = " << p2.origin_distance();
}