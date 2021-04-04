#include <stdio.h>
int main()
{
	int n, i, count = 0, sum = 0;

	scanf("%d", &n);

	for (i = 1;; i++) {
		if (i % 2 == 1) {
			sum += i;
			count++;
		}
		if (sum >= n) {
			break;
		}
	}
	printf("%d %d", count, sum);
}