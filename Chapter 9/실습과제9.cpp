#include <stdio.h>
int main()
{
	int score[50], n, tmp, i, j, sum = 0, count = 0;
	int lowsco = 0, topscore = 0;
	float avg;

	printf("50������ ���� n�� �Է��� �ּ���.\n");
	scanf("%d", &n);

	printf("n���� ������ �Է��� �ּ���.\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	printf("n���� ��� ���� ��������\n");
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (score[i] > score[j]) {
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", score[i]);
	}
	printf("\n������ �л����� ����\n");
	for (i = n / 10; i < n - n / 10; i++) {
		printf("%d ", score[i]);
		sum += score[i];
		count++;
	}
	avg = (float)sum / count;
	printf("\n");
	printf("���� ��   : %d\n", sum);
	printf("���� ��� : %.1f\n", avg);
	printf("���� �������� : %d\n", score[n/10]);
	printf("���� �ְ����� : %d", score[n-1-n/10]);
}