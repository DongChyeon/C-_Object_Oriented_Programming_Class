// ����2. �����̵� 13���� ���� ����(find_substr �Լ�)�� �����Ͽ� ���ڿ����� ��ġ�ϴ� �κй��ڿ��� ���� ����϶�.
#include <iostream>
using namespace std;

int count_substr(const char* sub, const char* str);
// 2017 ���� �������ʹ� �ؼ���� ������ const�� �ٿ��� �Ѵ�.
int main() {
	int count;
	count = count_substr("aba", "aabababacabaabca");
	cout << count << "�� ����ֽ��ϴ�.";
	return 0;
}

int count_substr(const char* sub, const char* str) {
	const char* p, * p2;
	int count = 0;
	for (int i = 0; str[i]; i++) {
		p = &str[i];
		p2 = sub;
		while (*p2 && *p2 == *p) {
			p++; p2++;
		}
		if (!*p2) count++;
	}	// p2�� ��(NULL)�� ������ �� ��ġ�ϴ� �κ��� ã�� ��
	return count;
}