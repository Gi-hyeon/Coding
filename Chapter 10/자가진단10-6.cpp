#include <stdio.h>
int main()
{
	int num[5][4];
	int sum[5] = { 0 };
	int i, j, count = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &num[i][j]);
			sum[i] += num[i][j];
		}
	}
	for (i = 0; i < 5; i++) {
		if (sum[i] / 4 >= 80) {
			printf("pass\n");
			count++;
		}
		else {
			printf("fail\n");
		}
	}
	printf("Successful : %d", count);
}