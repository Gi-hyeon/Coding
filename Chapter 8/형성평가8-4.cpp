#include <stdio.h>

int main()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 0; i < n-1; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 0; j < (n * 2 - 1) - i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
}