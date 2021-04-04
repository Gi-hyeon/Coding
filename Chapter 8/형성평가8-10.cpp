#include <stdio.h>

int main()
{
	int i, j, n, num = 1;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", num);
			num = (num + 2) % 10;
		}
		printf("\n");
	}
}