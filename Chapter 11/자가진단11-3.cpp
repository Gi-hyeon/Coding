#include <stdio.h>
void number(int n)
{
	int i, j, o = 1;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", o++);
		}
		printf("\n");
	}
}
int main()
{
	int num;

	scanf("%d", &num);

	number(num);

	return 0;
}