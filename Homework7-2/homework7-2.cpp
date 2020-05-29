// 문제2. queue 클래스에 다음과 같은 두 개의 멤버함수를 추가하고 이를 실행해보라.
#include <iostream>
using namespace std;

class queue {
private:
	int* q;
	int size;
	int sloc, rloc;
public:
	queue(int n);	// 생성자
	~queue();	// 소멸자
	void qput(int i);	// 큐에 값 집어넣기
	int qget();	// 큐 값 빼오기
	int max();	// 가장 높은 값 구하기
	void reverse_print(int num);	// 뒤집어 출력
};

queue::queue(int n) {
	sloc = rloc = -1;
	size = n;
	q = new int[size];

	cout << "Queue initialized." << endl;
}

queue::~queue() {
	cout << "Queue destroyed." << endl;
}

void queue::qput(int i) {
	if (sloc == (size - 1)) {
		cout << "Queue is full." << endl;
		return;
	}	// queue가 꽉 차 있을 경우 예외 처리
	sloc++;
	q[sloc] = i;
}

int queue::qget() {
	if (rloc == sloc) {
		cout << "Queue underflow." << endl;
		return 0;
	}
	rloc++;
	return q[rloc];
}

int queue::max() {
	if (sloc == -1) {
		cout << "Queue is empty." << endl;
		return -999;
	}	// queue가 비어있을 경우 예외 처리
	int max = q[0];
	for (int i = 1; i < sloc + 1; i++) {
		if (q[i] > max) max = q[i];
	}
	return max;
}

void queue::reverse_print(int num) {
	if (sloc < num - 1) {
		cout << "Number of values in queue is less than int num." << endl;
		return;
	}	// 입력한 수가 queue에 있는 값보다 많을 경우 예외 처리
	for (int i = 0; i < num; i++) {
		cout << q[sloc - i] << ' ';
	}
	cout << endl;
}

int main() {
	queue a(20);
	a.qput(234);
	a.qput(47);
	a.qput(55);
	a.qput(123);
	a.qput(23);
	a.qput(232);
	cout << a.max() << endl;
	a.reverse_print(4);

	return 0;
}