// ����2. queue Ŭ������ ������ ���� �� ���� ����Լ��� �߰��ϰ� �̸� �����غ���.
#include <iostream>
using namespace std;

class queue {
private:
	int* q;
	int size;
	int sloc, rloc;
public:
	queue(int n);	// ������
	~queue();	// �Ҹ���
	void qput(int i);	// ť�� �� ����ֱ�
	int qget();	// ť �� ������
	int max();	// ���� ���� �� ���ϱ�
	void reverse_print(int num);	// ������ ���
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
	}	// queue�� �� �� ���� ��� ���� ó��
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
	}	// queue�� ������� ��� ���� ó��
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
	}	// �Է��� ���� queue�� �ִ� ������ ���� ��� ���� ó��
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