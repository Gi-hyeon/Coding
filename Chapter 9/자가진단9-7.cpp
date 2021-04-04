#include <stdio.h>
int main()
{
	//100미만 가장 큰수 100이상 가장 작은 수 1<= <10000
	int a[10], i;
	int max = 0, min = 10000;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if (a[i] < 100 && max < a[i]) {
			max = a[i];
		}
		else if (a[i] >= 100 && min > a[i]) {
			min = a[i];
		}
	}
	if (max == 0) {
		max = 100;
	}
	if (min == 10000) {
		min = 100;
	}
	printf("%d %d", max, min);
}