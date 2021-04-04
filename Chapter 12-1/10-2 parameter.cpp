#include <stdio.h>

#define t_num 100

void input(int a[], int cnt)
{
	int i;
	for (i = 0; i < cnt; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
	}
}
void incre(int a[], int cnt)
{
	int count[100] = { 0 }, i;

	for (i = 0; i < t_num; i++) {
		if (a[i] == 0) {
			break;
		}
		count[a[i] % 10]++;
	}
	for (i = 0; i < 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d°³\n", i, count[i]);
		}
	}
}

int main()
{
	int num[t_num];
	input(num, t_num);
	incre(num, t_num);
}