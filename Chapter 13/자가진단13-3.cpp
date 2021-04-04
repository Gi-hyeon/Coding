#include <stdio.h>
int sum(int n)
{
	if (n <= 1) {
		return 1;
	}
	return n + sum(n - 1);
}
int main()
{
	int N;
	scanf_s("%d", &N);

	printf("%d", sum(N));
}