//// 문제2. 하나의 좌표를 나타내는 point 클래스를 정의하라. 생성자 함수는 x와 y의 초기값을 매개변수로 받아들인다. 
#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int x, int y);
	float two_distance(point a);
	friend float distance2(point a, point b);	// 프렌드 함수 선언
};

point::point(int x, int y) {
	this->x = x;
	this->y = y;
}

float point::two_distance(point a) {
	return sqrt(pow((x - a.x), 2) + pow((y - a.y), 2));
}	// point 클래스의 외부에 선언

float distance2(point a, point b) {
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int main() {
	point p1(3, 4), p2(-1, -5);
	cout << "p1과 p2 거리 = " << p1.two_distance(p2) << endl;
	cout << "p1과 p2 거리 = " << distance2(p1, p2);
}