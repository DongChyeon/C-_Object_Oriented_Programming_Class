/* n���� �޾� nũ���� �迭�� �������� �����ϰ� n���� ���� �Է¹޾� �� �迭�� �����ϰ�,
�ִ밪�� ����ϴ� �Ϲ� Ŭ������ �ۼ��϶�.*/
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
	cout << "<< �ִ밪 >> " << a.max() << endl;

	myclass<float> b;
	b.input();
	cout << "<< �ִ밪 >> " << b.max() << endl;

	return 0;
}
