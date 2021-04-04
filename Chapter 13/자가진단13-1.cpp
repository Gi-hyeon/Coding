#include <stdio.h>
void recru(int n)
{
	printf("recursive\n");
	if (n > 1) {
		recru(n - 1);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	recru(N);

	return 0;
}