#include <stdio.h>

int a[100], n;

void sort()
{
	int i, j, tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void odd()
{
	int i, odd_sum = 0, Even_sum = 0, count = 0, count1 = 0;
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			count++;
			odd_sum += a[i];
		}
		else {
			count1++;
			Even_sum += a[i];
		}
	}
	printf("\n짝수번째의 합은 : %d, 짝수번째의 평균은 : %d\n", Even_sum, Even_sum / count);
	printf("홀수번째의 합은 : %d, 홀수번째의 평균은 : %d", odd_sum, odd_sum / count1);
}

void output()
{
	int i;
	for (i = 0; i < n; i++) {
			printf("%d ", a[i]);
	}
}

int main()
{
	int i;
	printf("정수 1개를 입력 하세요.\n");
	scanf_s("%d", &n);
	printf("숫자만큼 정수를 입력 받으세요.\n");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	sort();
	printf("오름차순의 결과는? \n");
	output();
	odd();

	return 0;
}