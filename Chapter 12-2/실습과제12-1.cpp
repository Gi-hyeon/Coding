#include <stdio.h>
#define SWAP(x,y){int z=x;x=y;y=z;}
void input(int a[], int cnt)
{
	printf("���� n����ŭ ������ �Է��ϼ��� : ");
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
	printf("�ڷ��� ���� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	printf("�߰� ���� m�� �Է��ϼ��� : ");
	scanf_s("%d", &m);

	input(a, n);
	sort(a, n, m);
}