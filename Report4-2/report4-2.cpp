/* 두 인수 중 작은 값을 반환하는 min()이라는 템플리트 함수를 작성하여라.
예를 들면, min(3, 4)는 3을 반환하고 min('c', 'a')는 a를 반환한다. 이 함수를 사용하는
main함수를 작성하라.*/
#include <iostream>
using namespace std;

template <class X> X min(X a, X b) {
	if (a < b) return a;
	else return b;
}

int main() {
	cout << min(3, 4) << '\n';
	cout << min('c', 'a') << '\n';

	return 0;
}