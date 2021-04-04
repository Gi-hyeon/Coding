#include <stdio.h>
int a, b, i, j, stu_sum[100], sub_sum[100];
int c[100][100];
void input()
{
	printf("학생의 수와 과목의 개수를 입력하세요.\n");

	scanf("%d %d", &a, &b);

	printf("각 학생의 점수를 입력하세요.\n");
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
		printf("%d학생의 총점 %d\n", i, stu_sum[i]);
	}

	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			sub_sum[i] += c[j][i];
		}
		printf("%d과목의 총점 %d\n", i, sub_sum[i]);
	}
}

int main()
{
	input();
	gesan();

	return 0;
}