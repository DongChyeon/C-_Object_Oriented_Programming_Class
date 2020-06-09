/* C++ 예외 처리를 사용해서 divide 함수에 에러 검사 기능을 추가하여라. 특히 0으로 나누는 에러를 방지하여라.
main 함수를 작성하여 이 프로그램이 작동하는가를 보여라. */
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
		return -1;	// 에러값
	}
}