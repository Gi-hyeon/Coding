#include <stdio.h>
int main()
{
	int i;

	while (1) {
		printf("number? ");
		scanf("%d", &i);
			if (i > 0) {
				printf("positive integer\n");
			}
			else if (i < 0) {
				printf("negative number\n");
			}
			else
			break;
	}
	return 0;
}