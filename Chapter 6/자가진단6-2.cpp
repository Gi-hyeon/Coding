#include <stdio.h>
int main()
{
	int i = 1, sum = 0, num;

	scanf("%d", &num);
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d", sum);
}