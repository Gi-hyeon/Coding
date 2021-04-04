#include <stdio.h>
void area(int r)
{
	printf("%.2f", r * r * 3.14);
}
int main()
{
	int num;
	
	scanf("%d", &num);

	area(num);

	return 0;
}