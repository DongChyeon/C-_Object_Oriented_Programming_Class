// ����1. �� ������ �Էµ� ������ ������� �Է¹޾� ��ū�� ���� ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int count = 0;
	char str[80][80];
	char token[80];
	char* p, * q;
	for (int i = 0; i < 80; i++) {
		cout << "�Է�: ";
		gets_s(str[i]);
		p = str[i];
		while (*p) {	// p�� ����Ű�� ���� null�϶�����
			q = token;
			while (*p != ' ' && *p) {
				*q = *p;
				q++; p++;
			}
			if (*p) p++;	// ��ĭ �ǳʶٱ�
			count++;
		}
		if (!str[i][0]) {
			cout << "�� ��ū�� ��: " << count;
			break;	// �� ���� �Էµ� ��� ����
		}
	}
	return 0;
}