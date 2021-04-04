#include <stdio.h>
int main()
{
	int i, a = 0;
	while(1){
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		printf("number? ");
		scanf("%d", &i);

		switch (i) {
		case 1: {
			printf("\nSeoul\n\n");
			break;
		}
		case 2: {
			printf("\nWashington\n\n");
			break;
		}
		case 3: {
			printf("\nTokyo\n\n");
			break;
		}
		case 4: {
			printf("\nBeijing\n\n");
			break;
		}
		default: {
			printf("\nnone\n\n");
			a = 1;
			break;
		}
		}
		if (a == 1) {
			break;
		}
	}
}