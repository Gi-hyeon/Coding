#include <stdio.h>
int main()
{
	int fibo[100], i, j;
	fibo[0] = 100;

	scanf("%d", &fibo[1]);

	for (i = 2; i < 100; i++) {
		fibo[i] = fibo[i - 2] - fibo[i - 1];
		if (fibo[i] < 0) {
			break;
		}
	}
	for (j = 0; j <= i; j++) {
		printf("%d ", fibo[j]);
	}
}