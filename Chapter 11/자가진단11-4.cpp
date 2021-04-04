#include <stdio.h>
int max(int a,int b,int c) 
{
	int max;

	if (a > b&& a > c) {
		max = a;
	}
	else if (b > a&& b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}
int main()
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d", max(num1, num2, num3));

	return 0;
}