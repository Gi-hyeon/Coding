#include <stdio.h>
int main()
{
	int i;

	while (1) {
		scanf("%d", &i);
		if (i % 3 == 0) {
			printf("%d\n", i / 3);
		}
		if (i == -1) {
			break;
		}
	}
	return 0;
}