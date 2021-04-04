#include <stdio.h>
int main()
{
	int a[100], i, count = 0;

	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		count += 1;
	}
	for (i = count-1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
}