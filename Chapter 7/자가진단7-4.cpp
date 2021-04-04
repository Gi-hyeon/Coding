#include <stdio.h>
int main()
{
	int i, n;
	int sum = 0;

	scanf("%d", &n);

	for (i = 0; n <= 100; n++) {
		sum += n;
	}
	printf("%d", sum);
	return 0;
}