#include <stdio.h>
int main()
{
	int a[10], i;
	int sum = 0, avg = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if (i % 2 != 0) {
			sum += a[i];
		}
		else {
			avg += a[i];
		}
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1f", avg/5.0f);
}