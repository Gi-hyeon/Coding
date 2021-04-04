#include <stdio.h>
int fibo(int n)
{
	if (n < 2) {
		return 1;
	}
	return fibo(n / 2) + fibo(n - 1);
}
int main()
{
	int N;
	scanf_s("%d", &N);
	printf("%d", fibo(N));

	return 0;
}