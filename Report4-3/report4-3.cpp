/* 템플리트 함수에 대한 예로 find()라는 함수를 작성하여라. 이 함수는 값을 찾기 위해 배열을 탐색한다.
그 값이 있으면 그것의 첨자를 반환하고, 없다면 -1을 반환한다. find()를 템플리트 함수로 작성하고
main 함수에서 int, float, char 형에 대해 실행해 보아라,(size 매개변수는 배열에 있는 원소의 수를 나타낸다.) */
#include <iostream>
using namespace std;

template <class X> int find(X object, X* list, int size) {
	for (int i = 0; i < size; i++) {
		if (list[i] == object) return i;
	}
	return -1;
}

int main() {
	int arr1[4] = { 1, 2, 3, 4 };
	float arr2[3] = { 1.2, 3.4, 5.6 };
	char arr3[5] = { 'a', 'b', 'c', 'd', 'e' };

	cout << find(3, arr1, 4) << '\n';
	cout << find((float)1.3, arr2, 3) << '\n';	// 1.2를 double형으로 인식하기에 형변환
	cout << find('b', arr3, 5) << "\n";

	return 0;
}