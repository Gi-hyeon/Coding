#include <stdio.h>
int a, b, i, j, stu_sum[100], sub_sum[100];
int c[100][100];
void input()
{
	printf("�л��� ���� ������ ������ �Է��ϼ���.\n");

	scanf("%d %d", &a, &b);

	printf("�� �л��� ������ �Է��ϼ���.\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &c[i][j]);
		}
	}
}

void gesan()
{
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			stu_sum[i] += c[i][j];
		}
		printf("%d�л��� ���� %d\n", i, stu_sum[i]);
	}

	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			sub_sum[i] += c[j][i];
		}
		printf("%d������ ���� %d\n", i, sub_sum[i]);
	}
}

int main()
{
	input();
	gesan();

	return 0;
}