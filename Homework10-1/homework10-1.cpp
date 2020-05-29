// 문제1. 하나의 사각형을 나타내는 rectangle 클래스를 정의하라. 생성자 함수는 x1, y1, x2, y2의 초기값을 매개변수로 받아들인다.
#include <iostream>
using namespace std;

class rectangle {
private:
	int x1, y1;
	int x2, y2;
public:
	rectangle(int x1, int y1, int x2, int y2);	// 생성자
	int area();	// 사각형의 면적을 계산 후 반환
	int largearea(rectangle rect);	// 두 사각형의 면적 계산 후 더 큰 것을 반환
};

rectangle::rectangle(int x1, int y1, int x2, int y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

int rectangle::area() {
	return abs((x2 - x1) * (y2 - y1));	// 음수가 나오지 않게 하기 위해 abs사용
}

int rectangle::largearea(rectangle rect) {
	if (area() > rect.area()) {
		return area();
	}
	else { return rect.area(); }
}

int main() {
	rectangle r1(1, 1, 3, 4), r2(-1, -2, 1, -5);
	cout << "사각형 1의 면적 = " << r1.area() << '\n';
	cout << "더 큰 사각형의 면적 = " << r1.largearea(r2);
	return 0;
}