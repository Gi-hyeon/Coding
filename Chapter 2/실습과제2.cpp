#include <stdio.h>
int main()
{
	char name[4];
	int dri, blo, wai, age, res, call, cla;
	double foo, wei, eye, cm;

	printf("�̴ϼ��� �Է����ּ���. \n");
	scanf("%s", &name);

	printf("���̸� �Է��ϼ���. \n");
	scanf("%d", &age);

	printf("�ֹι�ȣ ���ڸ��� �Է��ϼ���. \n");
	scanf("%d", &res);

	printf("��ȭ��ȣ ���ڸ��� �Է��ϼ���. \n");
	scanf("%d", &call);

	printf("�й��� �Է��ϼ���. \n");
	scanf("%d", &cla);

	printf("�����Ը� �Է��ϼ���. \n");
	scanf("%lf", &wei);

	printf("�÷��� �Է��ϼ���. \n");
	scanf("%lf", &eye);

	printf("Ű�� �Է��ϼ���. \n");
	scanf("%lf", &cm);

	printf("�������� �������� �Է��ϼ���. \n");
	scanf("%d", &dri);

	printf("������ ������ �Է��ϼ���. \n");
	scanf("%d", &blo);

	printf("�㸮����� �Է��ϼ���. \n");
	scanf("%d", &wai);

	printf("�߻���� �Է��ϼ���. \n");
	scanf("%lf", &foo);

	printf("�̴ϼ� = %s\n", name);
	printf("���� = %d\n", age);
	printf("�ֹι�ȣ ���ڸ� = %d\n", res);
	printf("��ȭ��ȣ ���ڸ� = %d\n", call);
	printf("�й� = %d\n", cla);
	printf("�й� = %.1lfkg\n", wei);
	printf("�÷� = %.1lf\n", eye);
	printf("Ű = %.1lfcm\n", cm);
	printf("�������� = %d��\n", dri);
	printf("���� = %dmm/Hz\n", blo);
	printf("�㸮������ = %dinch\n", wai);
	printf("�߻����� = %.1lf mm\n", foo);

	return 0;
}