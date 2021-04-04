#include <stdio.h>
int main()
{
	int A[4][4], B[4][4], sum[4][4], min[4][4], mul[4][4], mul1[4][4], ainv[4][4], binv[4][4];
	int i, j, k, m, m1, a, b;

	printf("A의 4*4행렬을 입력해 주세요\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("B의 4*4행렬을 입력해 주세요\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			sum[i][j] = A[i][j] + B[i][j];
			min[i][j] = A[i][j] - B[i][j];
			ainv[i][j] = A[i][j] * A[i][j];
			binv[i][j] = B[i][j] * B[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			m = 0;
			for (k = 0; k < 4; k++) {
				m += A[i][k] * B[k][j];
				mul[i][j] = m;
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			m1 = 0;
			for (k = 0; k < 4; k++) {
				m1 += B[i][k] * A[k][j];
				mul1[i][j] = m1;
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			a = 0;
			for (k = 0; k < 4; k++) {
				a += A[i][k] * A[k][j];
				ainv[i][j] =a;
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			b = 0;
			for (k = 0; k < 4; k++) {
				b += B[i][k] * B[k][j];
				binv[i][j] = b;
			}
		}
	}
	
	printf("두 행렬의 합은 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", sum[i][j]);
		}
		printf("\n");
	}

	printf("두 행렬의 빼기는 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", min[i][j]);
		}
		printf("\n");
	}

	printf("두 행렬의 A*B는 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", mul[i][j]);
		}
		printf("\n");
	}

	printf("두 행렬의 B*A는 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", mul1[i][j]);
		}
		printf("\n");
	}

	printf("A의 거듭제곱은 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", ainv[i][j]);
		}
		printf("\n");
	}

	printf("B의 거듭제곱은 ?\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", binv[i][j]);
		}
		printf("\n");
	}
}