#include <stdio.h>
int main()
{
	double a, b;
	char c;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf(" %c", &c);

	printf("%.2lf\n", a);
	printf("%.2lf\n",b);
	printf("%c", c);

	return 0;
}