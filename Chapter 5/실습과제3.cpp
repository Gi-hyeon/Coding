#include <stdio.h>
int main()
{
	int num;

	printf("1.삼각형\n");
	printf("2.사각형\n");
	printf("3.원\n");
	printf("\nChoose one diagram:");

	scanf("%d", &num);

	switch (num)
	{
	case 1:
		int bas, hei;
		printf("삼각형을 선택하셨습니다.\n");
		printf("밑변과 높이를 입력하세요.\n");
		scanf("%d %d", &bas, &hei);
		printf("삼각형의 넓이는 %d입니다.", bas * hei / 2);
		break;
	case 2:
		int a, b;
		printf("사각형을 선택하셨습니다.\n");
		printf("가로와 세로를 입력하세요.\n");
		scanf("%d %d", &a, &b);
		printf("사각형의 넓이는 %d입니다.", a * b);
		break;
	case 3:
		float r;
		printf("원을 선택하셨습니다.\n");
		printf("반지름을 입력하세요.\n");
		scanf("%f", &r);
		printf("원의 넓이는 %.4f입니다.", r * r * 3.14);
		break;
	default:
		printf("no supported diagram");
		break;
	}
	return 0;
}