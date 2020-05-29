// 문제2. 슬라이드 13번의 예제 문제(find_substr 함수)를 참고하여 문자열에서 일치하는 부분문자열의 수를 출력하라.
#include <iostream>
using namespace std;

int count_substr(const char* sub, const char* str);
// 2017 이후 버전부터는 준수모드 때문에 const를 붙여야 한다.
int main() {
	int count;
	count = count_substr("aba", "aabababacabaabca");
	cout << count << "개 들어있습니다.";
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
	}	// p2가 끝(NULL)에 도달할 시 일치하는 부분을 찾은 것
	return count;
}