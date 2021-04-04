#include <stdio.h>
int main()
{
	int a[10], i;
	int min = 1000;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("%d", min);
}