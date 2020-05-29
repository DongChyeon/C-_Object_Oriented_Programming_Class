//// ����2. �ϳ��� ��ǥ�� ��Ÿ���� point Ŭ������ �����϶�. ������ �Լ��� x�� y�� �ʱⰪ�� �Ű������� �޾Ƶ��δ�. 
#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int x, int y);
	float two_distance(point a);
	friend float distance2(point a, point b);	// ������ �Լ� ����
};

point::point(int x, int y) {
	this->x = x;
	this->y = y;
}

float point::two_distance(point a) {
	return sqrt(pow((x - a.x), 2) + pow((y - a.y), 2));
}	// point Ŭ������ �ܺο� ����

float distance2(point a, point b) {
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int main() {
	point p1(3, 4), p2(-1, -5);
	cout << "p1�� p2 �Ÿ� = " << p1.two_distance(p2) << endl;
	cout << "p1�� p2 �Ÿ� = " << distance2(p1, p2);
}