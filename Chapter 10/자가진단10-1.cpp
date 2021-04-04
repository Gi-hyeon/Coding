#include <stdio.h>
int main()
{
	int num[26] = { 0 }, i;
	char al;

	while (1) {
		scanf(" %c", &al);
		if (al >=65 && al<=90) {
			num[al - 65]++;
		}
		else {
			break;
		}
	}
	for (i = 0; i < 26; i++) {
		if (num[i] > 0) {
			printf("%c : %d\n", 65 + i, num[i]);
		}
	}
}