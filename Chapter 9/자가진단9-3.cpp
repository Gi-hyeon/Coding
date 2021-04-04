#include <stdio.h>
int main()
{
	char c[10];
	int i;

	for (i = 0; i < 10; i++) {
		scanf(" %c", &c[i]);
	}

	printf("%c %c %c", c[0], c[3], c[6]);
}