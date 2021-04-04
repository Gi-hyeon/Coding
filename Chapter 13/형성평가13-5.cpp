#include <stdio.h>
int count;
int se(int n)
{
	if (n == 1) {
		return count;
	}
	if (n % 2 == 0) {
		count++;
		return se(n / 2);
	}
	if (n % 2 == 1) {
		count++;
		return se(n / 3);
	}
}
int main()
{
	int N;
	scanf_s("%d", &N);
	printf("%d", se(N));

	return 0;
}