#include <stdio.h>
void input(int a[], int cnt)
{
	printf("N개의 정수를 입력하세요 : ");
	for (int i = 0; i < cnt; i++) {
		scanf_s("%d", &a[i]);
	}
}
void sort(int a[],int cnt)
{
	for (int i = 0; i < cnt-1; i++) {
		for (int j = i + 1; j < cnt; j++) {
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void output(int a[], int cnt)
{
	for (int i = 0; i < cnt; i++) {
		printf("%d ", a[i]);
	}
}
int main()
{
	int N, a[15];
	printf("정수 N을 입력하세요 : ");
	scanf_s("%d", &N);

	input(a, N);
	sort(a, N);
	output(a, N);
}