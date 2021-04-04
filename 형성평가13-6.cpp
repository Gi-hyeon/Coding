#include <stdio.h>

int sum(int x) {
	int tmp, sum = 0;
	while (x > 0) {
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}

int main() {
	//freopen("input.txt", "rt", stdin);    
	int n, num, i, sum, max = -2147000000, res;
	while (1) {
		scanf("%d", &num);
		sum = sum(num);

		if (sum > max) {
			res = num;
			max = sum;
		}
		else if (sum == max) {
			if (num > res) res = num;
		}
		if (num == -999) {
			break;
		}
	}

	printf("%d\n", res);

	return 0;
}