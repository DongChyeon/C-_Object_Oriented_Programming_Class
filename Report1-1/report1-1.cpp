// ����1. ����ڰ� �Է��� ������, ����, ������(,.! 3����)�� ������ ���� ���α׷��� �ۼ��Ͽ���. ����ڰ� <Enter> Ű�� ������ �Է��� �ߴܵȴ�. If ���� ����Ͽ� ���ڸ� ������, ����, �����ڷ� �з��Ͽ���. ���α׷��� ������ �� ������ ������ ����Ͽ���.
#include <iostream>
using namespace std;

int main() {
	int english = 0, number = 0, punctuation = 0;
	char text[100];

	cout << "�Է� : ";
	gets_s(text);

	for (int i = 0; text[i] != '\0'; i++) {
		if (('A' <= text[i] && text[i] <= 'Z') || ('a' <= text[i] && text[i] <= 'z')) english++;
		else if ('0' <= text[i] && text[i] <= '9') number++;
		else if (text[i] == ',' || text[i] == '.' || text[i] == '!') punctuation++;
	}
	cout << "�������� ������ " << english << endl;
	cout << "������ ������ " << number << endl;
	cout << "�������� ������ " << punctuation << endl;
	
	return 0;
}