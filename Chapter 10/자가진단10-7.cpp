#include <stdio.h>
int main()
{
	int num[5][5] = { {1,1,1,1,1} };
	int i, j;

	for (i = 1; i < 5; i++) {
		num[i][0] = 1;
		for (j = 1; j < 5; j++) {
			num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
}