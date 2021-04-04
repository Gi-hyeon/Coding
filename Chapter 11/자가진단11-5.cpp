#include <stdio.h>
int inv(int a, int b)
{
	int i, c = a;
	
	for (i = 1; i < b; i++) {
		a *= c;
	}
	if (b == 0) {
		a = 1;
		return a;
	}
	return a;
}
int main()
{
	int m, n;

	scanf("%d %d", &m, &n);

	printf("%d", inv(m, n));

	return 0;
}