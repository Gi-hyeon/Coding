#include <stdio.h>

int main()
{
	double yd = 91.44;
	double in = 2.54;
    double a = 2.1;
	double b = 10.5;

	printf("%4.1fyd = %5.1fcm\n", a, a * yd);
	printf("%4.1fin = %5.1fcm", b, b * in);

	return 0;
}
