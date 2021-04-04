#include <stdio.h>
int main()
{
	int i, num;
	int tc = 0, fc = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num % 3 == 0) {
			tc++;
		}
		if (num % 5 == 0) {
			fc++;
		}

	}
	printf("Multiples of 3 : %d\n", tc);
	printf("Multiples of 5 : %d", fc);
	return 0;
}