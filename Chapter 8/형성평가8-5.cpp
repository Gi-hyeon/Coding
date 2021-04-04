#include <stdio.h>

int main()
{
	int i, j, n;

	scanf("%d", &n);
	//4 2 0     1 3 5
	for (i = 0; i < n; i++) {
		for (j = 0; j < n * 2 - i * 2 - 2; j++) {
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}