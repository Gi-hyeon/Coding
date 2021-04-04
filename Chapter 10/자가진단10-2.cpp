#include <stdio.h>
int main()
{
	int num, i;
	int count[10] = { 0 };
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		count[num / 10]++;
	}
	for (i = 0; i < 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d\n", i, count[i]);
		}
	}
}