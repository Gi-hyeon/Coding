#include <stdio.h>
int main() 
{
	char c[3][5];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			scanf(" %c", &c[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c ", c[i][j] + 32);
		}
		printf("\n");
	}
}