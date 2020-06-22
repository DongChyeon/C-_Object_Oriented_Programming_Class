/* 두 개의 box를 더하는 독립함수 add_box를 작성하라. 이때 add_box를 프렌드 함수로 지정하여 사용하라
두 개의 box를 곱하는 곱셈 연산자 *를 중복하라. 이때 멤버함수를 사용하라. */
#include <iostream>
using namespace std;

class box {
private:
    double l, w, h;
public:
    box() {}    // 기본 생성자
    box(double a, double b, double c) : l(a), w(b), h(c) {}
    void vol() {
        cout << "부피 : " << l * w * h << "\n";
    }
    friend box add_box(box box1, box box2); // 프렌드 함수
    box operator*(box box2);    // * 연산자 중복
};

box add_box(box box1, box box2) {
    box temp;

    temp.l = box1.l + box2.l;
    temp.w = box1.w + box2.w;
    temp.h = box1.h + box2.h;

    return temp;
}

box box::operator*(box box2) {
    l = l * box2.l;
    w = w * box2.w;
    h = h * box2.h;

    return *this;
}

int main() {
    box x(3.0, 2.0, 1.0), y(1.0, 2.0, 3.0), z;
    z = add_box(x, y); z.vol();
    z = x * y; z.vol();
    return 0;
}