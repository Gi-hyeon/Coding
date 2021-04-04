#include <stdio.h>
int main()
{
	float wei;

	scanf("%f", &wei);

	if (wei <= 50.8) {
		printf("Flyweight");
	}
	else if (wei <= 61.23) {
		printf("Lightweight");
	}
	else if (wei <= 72.57) {
		printf("Middleweight");
	}
	else if (wei <= 88.45) {
		printf("Cruiserweight");
	}
	else {
		printf("Heavyweight");
	}

	return 0;
}