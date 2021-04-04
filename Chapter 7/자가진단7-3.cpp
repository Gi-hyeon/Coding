#include <stdio.h>
int main()
{
	int i, eve;

	scanf("%d", &i);

	for (eve = 2; eve <= i; eve += 2) {
		printf("%d ", eve);
	}
	return 0;
}