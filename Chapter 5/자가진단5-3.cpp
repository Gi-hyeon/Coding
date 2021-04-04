#include <stdio.h>
int main()
{
	int a, b;

	scanf("%d", &a);

	b = 20 - a;

	if (a >= 20) {
		printf("adult");
	}
	else {
		printf("%d years later", b);
	}

	return 0;
}