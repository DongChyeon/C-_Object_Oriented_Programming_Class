// ����1. �ϳ��� ��ǥ�� ��Ÿ���� point Ŭ������ �����϶�. ������ �Լ��� x�� y�� �ʱⰪ�� �Ű������� �޾Ƶ��δ�. 
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
	cout << "p1�� �����Ÿ� = " << p1.origin_distance() << endl;
	cout << "p2�� �����Ÿ� = " << p2.origin_distance();
}