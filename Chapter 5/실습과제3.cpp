#include <stdio.h>
int main()
{
	int num;

	printf("1.�ﰢ��\n");
	printf("2.�簢��\n");
	printf("3.��\n");
	printf("\nChoose one diagram:");

	scanf("%d", &num);

	switch (num)
	{
	case 1:
		int bas, hei;
		printf("�ﰢ���� �����ϼ̽��ϴ�.\n");
		printf("�غ��� ���̸� �Է��ϼ���.\n");
		scanf("%d %d", &bas, &hei);
		printf("�ﰢ���� ���̴� %d�Դϴ�.", bas * hei / 2);
		break;
	case 2:
		int a, b;
		printf("�簢���� �����ϼ̽��ϴ�.\n");
		printf("���ο� ���θ� �Է��ϼ���.\n");
		scanf("%d %d", &a, &b);
		printf("�簢���� ���̴� %d�Դϴ�.", a * b);
		break;
	case 3:
		float r;
		printf("���� �����ϼ̽��ϴ�.\n");
		printf("�������� �Է��ϼ���.\n");
		scanf("%f", &r);
		printf("���� ���̴� %.4f�Դϴ�.", r * r * 3.14);
		break;
	default:
		printf("no supported diagram");
		break;
	}
	return 0;
}