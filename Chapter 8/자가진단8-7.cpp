#include <stdio.h>

int main()
{
	int i, j, n, num = 1;
	char cha = 'A';

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%d ", num++);
		}
		for (j = 1; j <= i + 1; j++) {
			printf("%c ", cha++);
		}
		printf("\n");
	}
}