#include <stdio.h>
void line()
{
	puts("~!@#$^&*()_+|");
}
int main()
{
	int i,num;
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		line();
	}
	return 0;
}