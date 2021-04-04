#include <stdio.h>
int main()
{
	int i, n, score, sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &score);
		sum += score;
	}
	printf("avg : %.1f\n", (float)sum / n);
	if ((float)sum / n >= 80) {
		printf("pass");
	}
	else {
		printf("fail");
	}
	return 0;
}