#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, sum = 0, sum1 = 0;
	int d, e, f;

	scanf_s("%f %f %f", &a, &b, &c);

	sum = a + b + c;
	d = floor(a + 0.5);
	e = floor(b + 0.5);
	f = floor(c + 0.5);
	sum1 = d + e + f;

	printf("%.f\n", floor(sum / 3 + 0.5));
	printf("%.f", floor(sum1 / 3 + 0.5));
}
