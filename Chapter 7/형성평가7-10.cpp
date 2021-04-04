#include <stdio.h>
int main()
{
	int i, j;
	int a, b;
	
	scanf("%d %d", &a, &b);

	if (a>b) {         //a=5 b=3로 가정
		for (i = 1; i <= 9; i++) {
			for (j = a; j >= b; j--) {
				printf("%d * %d =%3d   ", j, i, j * i);
			}
			printf("\n");
		}
	}
	else {             //a=3 b=5로 가정
		for (i = 1; i <= 9; i++) {
			for (j = a; j <= b; j++) {
				printf("%d * %d =%3d   ", j, i, j * i);
			}
			printf("\n");
		}
	}
	return 0;
}