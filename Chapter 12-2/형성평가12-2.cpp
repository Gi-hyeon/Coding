#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, e, f;
	int c, d, g;

	scanf_s("%f %f", &a, &b);

	e = sqrt(a);
	f = sqrt(b);
	c = sqrt(a);
	d = sqrt(b);
	g = c - d;
	if (g < 0) {
		g *= -1;
	}

	if (a < b) {
		if (e == c) {
			g += 1;
		}
	}
	else {
		if (f == d) {
			g += 1;
		}
	}

	printf("%d", g);

	return 0;
}