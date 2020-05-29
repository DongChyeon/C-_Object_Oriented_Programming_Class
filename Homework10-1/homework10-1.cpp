// ����1. �ϳ��� �簢���� ��Ÿ���� rectangle Ŭ������ �����϶�. ������ �Լ��� x1, y1, x2, y2�� �ʱⰪ�� �Ű������� �޾Ƶ��δ�.
#include <iostream>
using namespace std;

class rectangle {
private:
	int x1, y1;
	int x2, y2;
public:
	rectangle(int x1, int y1, int x2, int y2);	// ������
	int area();	// �簢���� ������ ��� �� ��ȯ
	int largearea(rectangle rect);	// �� �簢���� ���� ��� �� �� ū ���� ��ȯ
};

rectangle::rectangle(int x1, int y1, int x2, int y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

int rectangle::area() {
	return abs((x2 - x1) * (y2 - y1));	// ������ ������ �ʰ� �ϱ� ���� abs���
}

int rectangle::largearea(rectangle rect) {
	if (area() > rect.area()) {
		return area();
	}
	else { return rect.area(); }
}

int main() {
	rectangle r1(1, 1, 3, 4), r2(-1, -2, 1, -5);
	cout << "�簢�� 1�� ���� = " << r1.area() << '\n';
	cout << "�� ū �簢���� ���� = " << r1.largearea(r2);
	return 0;
}