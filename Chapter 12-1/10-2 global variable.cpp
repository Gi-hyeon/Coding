#include <stdio.h>
#define t_num 100
int num[t_num];

void input()
{
	int i;
	for (i = 0; i < t_num; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] == 0) {
			break;
		}
	}
}

void incre()
{
	int count[100] = { 0 }, i;
	for (i = 0; i < t_num + 1; i++) {
		if (num[i] != 0) {
			count[num[i] % 10] ++;
	}
	}
	for (i = 0; i < 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d°³\n", i, count[i]);
		}
	}
}

int main()
{
	input();
	incre();

	return 0;
}