#include <stdio.h>
int a, b, min, max, tem, i, j;

void input() 
{
	scanf("%d %d", &a, &b);
}

void gop() 
{
	if (a > b) {
		tem = a;
		a = b;
		b = tem;
	}
	for (i = a; i <= b; i++) {
		printf("== %ddan ==\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	input();
	gop();

	return 0;
}