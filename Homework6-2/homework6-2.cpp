// ����2. ������ ���� ��������� ����Լ��� ���� boxŬ������ �ۼ��Ͽ���.
#include <iostream>
using namespace std;

class box {
private:
	double x, y, z;
	double volume;
public:
	void setbox(double a, double b, double c);	// x = a, y = b, z = c;�� ����
	void calcvolume();	// ���Ǹ� ����ϴ� �Լ�
	int vol();	// ���Ǹ� ��ȯ�ϴ� �Լ�
};

void box::setbox(double a, double b, double c) {
	x = a, y = b, z = c;
}

void box::calcvolume() {
	volume = x * y * z;
}

int box::vol() {
	return volume;
}

int main() {
	double a, b, c;
	box mybox;	// ��ü ����
	cin >> a >> b >> c;
	mybox.setbox(a, b, c);
	mybox.calcvolume();
	cout << "���Ǵ� " << mybox.vol();
}