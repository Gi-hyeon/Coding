#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, a[5];
	int sum = 0;

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
		sum += abs(a[i]);
	}
	printf("%d", sum);
}