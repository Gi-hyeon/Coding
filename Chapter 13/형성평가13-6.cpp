#include <stdio.h>
int se(int n, int a)
{
	if (!(n / 10)) {
		return (n * a);
	}
	if (n % 10) {
		return se(n / 10, a * (n % 10));
	}
	else {
		return se(n / 10, 1);
	}
}
int main()
{
	int N, N1, N2, N3;
	scanf_s("%d %d %d", &N1, &N2, &N3);

	N = N1 * N2 * N3;

	printf("%d", se(N, 1));

	return 0;
}