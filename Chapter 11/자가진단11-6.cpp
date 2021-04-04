#include <stdio.h>
int gesan(int a, char c, int b)
{
	int result;
	if (c == '+') {
		result = a + b;
	}
	else if (c == '-') {
		result = a - b;
	}
	else if (c == '*') {
		result = a * b;
	}
	else if (c=='/') {
		result = a / b;
	}
	else {
		result = 0;
	}

	return result;
}
int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);

	printf("%d %c %d = %d", a, c, b, gesan(a, c, b));

	return 0;
}