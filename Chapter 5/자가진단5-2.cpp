#include <stdio.h>
int main()
{
	int a, b, obesity;

	scanf("%d %d", &a, &b);

	obesity = b + 100 - a;

	printf("%d\n", obesity);
	if (obesity > 0) {
		printf("Obesity");
	}

	return 0;
}