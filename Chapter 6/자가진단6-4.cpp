#include <stdio.h>
int main()
{
	int i;
	int sum = 0, cnt = 0;

	while (1) {
		scanf("%d", &i);
		sum += i;
		cnt++;
		if (i >= 100) 
			break;
	}

	printf("%d\n", sum);
	printf("%.1f", (float)sum / cnt);

	return 0;
}