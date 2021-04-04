#include <stdio.h>
int main()
{
	int num[4][2];
	int i, j;
	int sum = 0, sum1[4] = { 0 }, sum2[2] = { 0 };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &num[i][j]);
			sum1[i] += num[i][j];
			sum2[j] += num[i][j];
			sum += num[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%d ", sum1[i] / 2);
	}
	printf("\n");

	for (j = 0; j < 2; j++) {
		printf("%d ", sum2[j]/4);
	}
	printf("\n");

	printf("%d", sum/8);
}