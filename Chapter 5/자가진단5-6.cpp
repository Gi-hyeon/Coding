#include <stdio.h>
int main()
{
	int age;
	char gen;

	scanf("%c %d", &gen, &age);

	if (gen == 'M' && age >= 18) {
		printf("MAN");
	}
	else if (gen == 'M' && age < 18) {
		printf("BOY");
	}
	else if (gen == 'F' && age >= 18) {
		printf("WOMAN");
	}
	else {
		printf("GIRL");
	}
	
	return 0;
}	