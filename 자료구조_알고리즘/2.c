#include <stdio.h>

int Stack[10][10], SP[10], tong, r, c;

void PushST(int tong, int num) {
	Stack[tong][SP[tong]] = num;
	SP[tong]++;
}

int PopST(int tong) {
	int val = Stack[tong][SP[tong] - 1];

	SP[tong]--;
	return Stack[tong][SP[tong]];
}

int main() {
	int num = 0, val;

	for (r = 0; r < 2; r++) {
		for (c = 0; c < 10; c++) {
			num++;
			PushST(c, num);
		}
	}
	val = PopST(tong);
	printf("%4d", val);
}