//#include <stdio.h>
//#define NN 10
//
//int Hcnt = 1;
//
//void Swap(int* data, int p, int q) {
//	int tmp = data[p];
//	data[p] = data[q];
//	data[q] = tmp;
//}
//void Makeheap(int* data) {
//	int idx_c = Hcnt;	// hcnt : heap에 추가된 자료의 수
//	int idx_p = Hcnt / 2;
//
//	while (idx_c > 1 && data[idx_c] < data[idx_p]) {
//		Swap(data, idx_c, idx_p);
//		idx_c = idx_p;
//		idx_p = idx_c / 2;
//	}
//}
//int DeleteHeap(int* data) {
//	int rst = data[1];
//	int idx_p = 1, idx_c, Lchild, Rchild;
//
//
//	data[1] = data[--Hcnt];
//
//	while(idx_p){
//		Lchild = idx_p * 2;
//		Rchild = Lchild + 1;
//
//		idx_c = data[Lchild] < data[Rchild] ? Lchild : Rchild;
//
//		if (data[idx_p] > data[idx_c]) {
//			Swap(data, idx_p, idx_c);
//			idx_p = idx_c;
//		}
//		else
//			break;
//	}
//	return rst;
//}
//void PrintOut(int* data, int gg) {
//	int a;
//	for (a = 0; a < gg; a++) {
//		printf("%5d", data[a]);
//	}
//	printf("\n");
//}
//int main() {
//	int data[11] = { 0,181,170,46,76,50,25,144,39,37,83 };
//	int heap[11];
//
//	PrintOut(data, 11);
//
//	for (int a = 1; a < 11; a++) {
//		heap[a] = data[a];
//		Makeheap(heap);
//		Hcnt++;
//		PrintOut(heap, Hcnt);
//	}
//	for (int a = 0; a < 10; a++) {
//		printf("%4d", DeleteHeap(heap));
//	}
//	PrintOut(heap, Hcnt);
//}