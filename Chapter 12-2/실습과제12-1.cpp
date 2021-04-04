#include <stdio.h>
#define SWAP(x,y){int z=x;x=y;y=z;}
void input(int a[], int cnt)
{
	printf("개수 n개만큼 정수를 입력하세요 : ");
	for (int i = 0; i < cnt; i++) {
		scanf_s("%d", &a[i]);
	}
}
void sort(int a[], int cnt, int M)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < cnt - 1; j++) {
			if (a[j] > a[j + 1]) {
				SWAP(a[j], a[j + 1]);
			}
		}
		for (int i = 0; i < cnt; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}

}

int main()
{
	int n, m, a[50];
	printf("자료의 개수 n을 입력하세요 : ");
	scanf_s("%d", &n);
	printf("중간 라운드 m을 입력하세요 : ");
	scanf_s("%d", &m);

	input(a, n);
	sort(a, n, m);
}