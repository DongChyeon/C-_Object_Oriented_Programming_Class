// ����2. �� ������ �Էµ� ������ ������� �Է� �޾� ���ڿ��� �ִ� ����, �޸�, ��ħǥ�� ���� ���� ���α׷��� �ۼ��Ͽ���. ����, �޸�, ��ħǥ�� �����ϱ� ���� switch ���� ����Ͽ���.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, i;
	int gap = 0, comma = 0, period = 0;
	char text[100][80];
	char character;

	for (t = 0; t < 100; t++) {
		cout << t + 1 << "��° ���� : ";
		gets_s(text[t]);
		if (text[t][0] == NULL) break;
	}

	for (i = 0; i < 80; i++) {
		for (t = 0; t < 100; t++) {
			character = text[t][i];
			switch(character) {
			case ' ':
				gap++;
				break;
			case ',':
				comma++;
				break;
			case '.':
				period++;
				break;
			}
		}
	}

	cout << "������ ������ " << gap << endl;
	cout << "�޸��� ������ " << comma << endl;
	cout << "��ħǥ�� ������ " << period << endl;

	return 0;
}