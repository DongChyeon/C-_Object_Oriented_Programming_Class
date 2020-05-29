// 문제. 하나의 정수 n 값을 입력받아, n의 모든 약수들과 약수들의 개수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

void submultiple(int num) {
	int count = 0;

	printf("%d의 약수는", num);
	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			count++;
			printf(" %d", i);
		}
	}
	printf("\n약수의 개수는 : %d\n\n", count);
}

int main() {
	int num;

	while (1) {
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num);
		submultiple(num);
	}
}