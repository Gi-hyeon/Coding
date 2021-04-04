#include <stdio.h>

int arr[100] = { 0,1,2 };

int se(int n)
{
	if (arr[n] == 0) {
		arr[n] = (se(n - 1) * se(n - 2)) % 100;
	}
	return arr[n];
}
int main()
{
	int N;
	scanf_s("%d", &N);
	printf("%d", se(N));

	return 0;
}