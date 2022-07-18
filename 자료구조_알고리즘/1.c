#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[30][30] = { 0, };
	int x, y, i, n;

	printf("홀수 입력 : ");
	scanf("%d", &n);

	x = 1, y = (n + 1) / 2;

	for (i = 1; i <= n * n; i += 1) {
		arr[x][y] = i;

		if (i % n == 0) {
			x++;
		} else {
			x--;
			y++;
			if (x == 0) {
				x = n;
			} if (y == n + 1) {
				y = 1;
			}
		}
	}
	for (i = 1; i <= n; i += 1) {
		for (int j = 1; j <= n; j += 1) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//

//#include <stdio.h>
//#define size 7
//
//int arr[10][10];
//int Sr, HAP;
//
//void pout() {
//	int r, c;
//	for (r = 0; r < size; r++) {
//		for (c = 0; c < size; c++) {
//			printf("%4d", arr[r][c]);
//		}
//		printf("\n\n");
//	}
//}
//void diag() {
//	int r, c;
//	int Ro = size - 1;
//
//	int nr = (1 + size) / 2;
//
//	for (r = 0; r < Ro - 1; r += 2) {
//		for (c = 0; c <= r; c++) {
//			arr[r - c][c] = nr + c;
//			arr[Ro - r + c][Ro - c] = HAP - nr - c;
//		}
//		nr = nr + Sr;	// Sr : Step Row
//	}
//	for (c = 0; c < size; c++) {
//		arr[Ro - c][c] = nr + c;
//	}
//}
//
//void LeftRight() {
//	int r, c, Gi;
//	int Ro = size - 1;
//	int LR = (size + 1) / 2;
//	int nr = 0;
//
//	for (r = LR - 1; r < Ro; r++) {
//		Gi = 2 * r + 1;	/// 기준점
//		for (c = r + 1; c < size; c++) {
//			arr[Gi - c][c] = nr + c - r;	// 모수
//			arr[Ro - Gi + c][Ro - c] = HAP - nr - c + r;	// 보수
//		}
//		nr = nr + size;
//	}
//}
//
//void UpDown() {
//	int r, c, nr = (size + 1) / 2 + 1;
//	int GiC;
//
//	for (c = 0; c < Ro / 2; c++) {
//		GiC = c * 2 + 2;
//		for (r = 0; r < Ro / 2 - c; r++) {
//			arr[Ro - r][GiC + r - 1] = nr + r;
//			arr[r][Ro - GiC - r + 1] = HAP - nr - r;
//		}
//		nr = nr + size;
//	}
//}
//int main() {
//	Sr = size - 1;
//	HAP = size * size + 1;
//	diag();
//	pout();
//	LeftRight();
//	UpDown();
//}

// 선생님 라이브 코딩


