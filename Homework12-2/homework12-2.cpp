/* n값을 받아 n크기의 배열을 동적으로 생성하고 n개의 값을 입력받아 그 배열에 저장하고,
최대값을 출력하는 일반 클래스를 작성하라.*/
#include <iostream>
using namespace std;

template <class type> class myclass {
private:
	int size;
	type *arr;
public:
	myclass();
	void input();
	type max();
};

template <class type> myclass<type>::myclass() {
	cin >> size;
	arr = new type[size];
}

template <class type> void myclass<type>::input() {
	type t;
	for (int i = 0; i < size; i++) {
		cin >> t;
		arr[i] = t;
	}
}

template <class type> type myclass<type>::max() {
	type max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int main() {
	myclass<int> a;
	a.input();
	cout << "<< 최대값 >> " << a.max() << endl;

	myclass<float> b;
	b.input();
	cout << "<< 최대값 >> " << b.max() << endl;

	return 0;
}
