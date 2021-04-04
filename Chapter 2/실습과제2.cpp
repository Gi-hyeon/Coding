#include <stdio.h>
int main()
{
	char name[4];
	int dri, blo, wai, age, res, call, cla;
	double foo, wei, eye, cm;

	printf("이니셜을 입력해주세요. \n");
	scanf("%s", &name);

	printf("나이를 입력하세요. \n");
	scanf("%d", &age);

	printf("주민번호 앞자리를 입력하세요. \n");
	scanf("%d", &res);

	printf("전화번호 뒷자리를 입력하세요. \n");
	scanf("%d", &call);

	printf("학번을 입력하세요. \n");
	scanf("%d", &cla);

	printf("몸무게를 입력하세요. \n");
	scanf("%lf", &wei);

	printf("시력을 입력하세요. \n");
	scanf("%lf", &eye);

	printf("키를 입력하세요. \n");
	scanf("%lf", &cm);

	printf("운전면허 몇종인지 입력하세요. \n");
	scanf("%d", &dri);

	printf("혈압이 몇인이 입력하세요. \n");
	scanf("%d", &blo);

	printf("허리사이즈를 입력하세요. \n");
	scanf("%d", &wai);

	printf("발사이즈를 입력하세요. \n");
	scanf("%lf", &foo);

	printf("이니셜 = %s\n", name);
	printf("나이 = %d\n", age);
	printf("주민번호 앞자리 = %d\n", res);
	printf("전화번호 뒷자리 = %d\n", call);
	printf("학번 = %d\n", cla);
	printf("학번 = %.1lfkg\n", wei);
	printf("시력 = %.1lf\n", eye);
	printf("키 = %.1lfcm\n", cm);
	printf("운전면허 = %d종\n", dri);
	printf("혈압 = %dmm/Hz\n", blo);
	printf("허리사이즈 = %dinch\n", wai);
	printf("발사이즈 = %.1lf mm\n", foo);

	return 0;
}