#include <stdio.h>

int main() {
	int i1, i2, sum;
	//printf("Enter first integer\n");
	scanf_s("%d", &i1);
	//printf("Enter second integer\n");
	scanf_s("%d", &i2);
	sum = i1 + i2;
	printf("�M%d\n", sum);
	sum = i1 - i2;
	printf("�t%d\n", sum);
	sum = i1 * i2;
	printf("���n%d\n", sum);
	sum = i1 / i2;
	printf("��%d\n", sum);
	sum = i1 % i2;
	printf("�l��%d\n", sum);

	return 0;
}
