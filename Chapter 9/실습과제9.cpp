#include <stdio.h>
int main()
{
	int score[50], n, tmp, i, j, sum = 0, count = 0;
	int lowsco = 0, topscore = 0;
	float avg;

	printf("50이하의 정수 n을 입력해 주세요.\n");
	scanf("%d", &n);

	printf("n명의 점수를 입력해 주세요.\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	printf("n명의 모든 점수 오름차순\n");
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
	printf("\n제외한 학생들의 점수\n");
	for (i = n / 10; i < n - n / 10; i++) {
		printf("%d ", score[i]);
		sum += score[i];
		count++;
	}
	avg = (float)sum / count;
	printf("\n");
	printf("점수 합   : %d\n", sum);
	printf("점수 평균 : %.1f\n", avg);
	printf("점수 최저점수 : %d\n", score[n/10]);
	printf("점수 최고점수 : %d", score[n-1-n/10]);
}