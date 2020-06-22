/* 2에서 20까지의 수의 자연 로그와 상용 로그를 출력하는 프로그램을 작성하여라. 소수점 이하 5자리로,
필드 너비를 10으로, 안쪽부터 채워지도록 테이블을 만들어라. 양수가 출력될 때 + 기호를 표시하도록
cout의 플래그를 설정하는 프로그램을 작성하여라. */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	/*for (int i = 2; i < 21; i++) {
		cout << showpos << left << setprecision(5) << setw(10) 
			<< log(i) << log10(i) << "\n";
	}	// +기호 표시, 안쪽부터 채워짐, 소수점 이하 5자리, 필드 너비 10*/

	cout.setf(ios::left);
	cout.setf(ios::showpos);
	cout.setf(ios::fixed);

	for (int i = 2; i < 21; i++) {
		cout.width(10);
		cout.precision(5);
		cout << log(i);
		cout.width(10);
		cout.precision(5);
		cout << log10(i);
		cout << "\n";
	}	

	return 0;
}