// ����. �ϳ��� ���� n ���� �Է¹޾�, n�� ��� ������ ������� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

void submultiple(int num) {
	int count = 0;

	printf("%d�� �����", num);
	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			count++;
			printf(" %d", i);
		}
	}
	printf("\n����� ������ : %d\n\n", count);
}

int main() {
	int num;

	while (1) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		submultiple(num);
	}
}