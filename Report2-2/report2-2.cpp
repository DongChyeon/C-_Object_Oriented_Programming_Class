// ����2. ���ڿ��� ������ rev_str() �Լ��� �ۼ��Ͽ���. rev_str() �Լ��� �� �� Ȥ�� �� ���� ���ڿ��� ó���� �� �ְ� �Լ��� �ߺ��Ͽ���. �� ���� ���ڿ��� ȣ��Ǹ�, ���ڿ��� ����� �� ���ڿ��� �־ ��ȯ�ϰ�, �� ���� ���ڿ��� ȣ��Ǹ� ���ڿ����� ������ �� �ι�° �μ��� ���ڿ��� �־ ��ȯ�Ѵ�. ���� ��� ������ ����.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void rev_str(char s1[]);
void rev_str(char s1[], char s2[]);

int main() {
	char s1[80], s2[80];
	strcpy(s1, "hello");
	rev_str(s1, s2);
	cout << "rev_str(s1, s2) ���� s1, s2 : ";
	cout << s1 << ' ' << s2 << endl;
	rev_str(s1);
	cout << "rev_str(s1) ���� s1, s2 : ";
	cout << s1 << ' ' << s2 << endl;
}

void rev_str(char s1[]) {
	char temp;
	for (int i = 0; i < (int)(strlen(s1) / 2); i++) {
		temp = s1[i];
		// cout << i << " " << strlen(s1) - (i + 1) << "\n";	// �� ���ڸ� �������
		s1[i] = s1[strlen(s1) - (i + 1)];
		s1[strlen(s1) - (i + 1)] = temp;
	}
}

void rev_str(char s1[], char s2[]) {
	strcpy(s2, s1);
	rev_str(s2);
}