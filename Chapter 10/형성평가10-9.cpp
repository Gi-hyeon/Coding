#include <stdio.h>
int main()
{
	int num[11][11] = { {1} };
	int a, i, j;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			num[i][j] = num[i - 1][j] + num[i - 1][j - 1];
		}
	}
	for (i = a; i > 0; i--) {
		for (j = a; j > 0; j--) {
			if (num[i][j] > 0) {
				printf("%d ", num[i][j]);
			}
		}
		printf("\n");
	}
}