// ����1. �Ʒ��� ����ü�� ����Ͽ� 5�� ��ǥ���� ���� �迭�� �����ϰ�, 5���� ��ǥ���� �о� �鿩��. �׸��� �� ��ǥ���� ���� ���������� �Ÿ��� ����Ͽ� ���� ����� ��ǥ���� ����϶�.
#include <iostream>
using namespace std;

struct point {
	int x, y;
};

int main() {
	int min, temp, minIndex;

	struct point p[5];
	p[0].x = 2; p[0].y = 3;
	p[1].x = 1; p[1].y = 6;
	p[2].x = -4; p[2].y = 2;
	p[3].x = 3; p[3].y = -3;
	p[4].x = -2; p[4].y = -2;

	min = sqrt(pow(p[0].x, 2) + pow(p[0].y, 2));

	for (int i = 0; i < 5; i++) {
		cout << p[i].x << ' ' << p[i].y << endl;
		temp = sqrt(pow(p[i].x, 2) + pow(p[i].y, 2));
		if (temp < min) {
			min = temp;
			minIndex = i;
		}
	}
	cout << "������ ���� ����� ��ǥ���� " << p[minIndex].x << ' ' << p[minIndex].y;

	return 0;
}