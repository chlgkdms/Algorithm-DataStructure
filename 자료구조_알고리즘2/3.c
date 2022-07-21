#include <stdio.h>

void swap(int* data, int p, int q) {
	int tmp = data[p];
	data[p] = data[q];
	data[q] = tmp;
}
void Quick(int* data, int si, int gg) {
	if (si < gg) {
		int gijun = data[si];
		int p = si, q = gg;

		while (p < q) {
			while (data[p] <= gijun) p = p + 1;		// decision p
			while (data[q] > gijun) q = q - 1;		// decision q

			if (p < q) 
				swap(data, p, q);
			else {
				swap(data, si, q);
				break;
			}
		}
		Quick(data, si, q - 1);
		Quick(data, q + 1, gg);
	}
}
void Printout(int *data, int gg) {
	int a;
	for (a = 0; a < gg; a++) {
		printf("%5d", data[a]);
	}
	printf("\n");
}
int main() {
	int data[11] = { 181,170,46,76,50,25,144,39,37,83,999999 };

	Printout(data, 10);
	Quick(data, 0, 9);
	Printout(data, 10);
}