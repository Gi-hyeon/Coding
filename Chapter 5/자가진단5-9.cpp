#include <stdio.h>
int main()
{
	int a, b, c;
	int min_data;

	scanf("%d %d %d", &a, &b, &c);

	min_data = (a < b) ? a : b;
	min_data = (min_data < c) ? min_data : c;

	printf("%d", min_data);

	return 0;
}