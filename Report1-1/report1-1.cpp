// ����1. ����ڰ� �Է��� ������, ����, ������(,.! 3����)�� ������ ���� ���α׷��� �ۼ��Ͽ���. ����ڰ� <Enter> Ű�� ������ �Է��� �ߴܵȴ�. If ���� ����Ͽ� ���ڸ� ������, ����, �����ڷ� �з��Ͽ���. ���α׷��� ������ �� ������ ������ ����Ͽ���.
#include <iostream>
using namespace std;

int main() {
	int english = 0, number = 0, punctuation = 0;
	char text[100];

	cout << "�Է� : ";
	gets_s(text);

	for (int i = 0; i < sizeof(text) / sizeof(int); i++) {
		if ((int)text[i] >= 65 && (int)text[i] <= 122) english++;
		else if ((int)text[i] >= 48 && (int)text[i] <= 57) number++;
		else if ((int)text[i] == 44 || (int)text[i] == 46 || (int)text[i] == 33) punctuation++;
	}
	cout << "�������� ������ " << english << endl;
	cout << "������ ������ " << number << endl;
	cout << "�������� ������ " << punctuation << endl;
	
	return 0;
}