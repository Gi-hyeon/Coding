#include <stdio.h>
void num(int n)
{
	if (n > 0) {
		printf("%d ", n);
		num(n - 1);
	}
}

int main()
{
	int N;
	scanf_s("%d", &N);
	num(N);

	return 0;
}