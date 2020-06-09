/* C++ ���� ó���� ����ؼ� divide �Լ��� ���� �˻� ����� �߰��Ͽ���. Ư�� 0���� ������ ������ �����Ͽ���.
main �Լ��� �ۼ��Ͽ� �� ���α׷��� �۵��ϴ°��� ������. */
#include <iostream>
using namespace std;

class CannotDivideException {
public:
	char str_what[80];
	CannotDivideException() { *str_what = 0; }
	CannotDivideException(const char* s) { strcpy_s(str_what, s); }
};

double divide(double a, double b);

int main() {
	cout << divide(234.234, 12.23) << "\n";
	cout << divide(12.312, 0);

	return 0;
}

double divide(double a, double b) {
	try {
		if (!b) throw CannotDivideException("Cannot divide by zero!");
		else return a / b;
	}
	catch (CannotDivideException e) {
		cout << e.str_what << "\n";
		return -1;	// ������
	}
}