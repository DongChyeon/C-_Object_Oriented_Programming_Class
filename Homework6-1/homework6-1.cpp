// 문제1. 아래의 구조체를 사용하여 5개 좌표값을 갖는 배열을 선언하고, 5개의 좌표값을 읽어 들여라. 그리고 각 좌표값에 대해 원점까지의 거리를 계산하여 가장 가까운 좌표값을 출력하라.
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
	cout << "원점에 가장 가까운 좌표값은 " << p[minIndex].x << ' ' << p[minIndex].y;

	return 0;
}