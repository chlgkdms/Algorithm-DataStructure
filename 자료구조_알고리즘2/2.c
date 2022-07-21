#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node* Link;
} Node;

void Printout(Node* List) {
	Node* ptr = List->Link;
	while (ptr != NULL) {
		printf("%4d", ptr->data);
		ptr = ptr->Link;
	}
	printf("\n\n");
}

void InsertNode(Node* List, Node* NewNode) {
	Node* ptr = List;

	if (ptr->Link == NULL)
		ptr->Link = NewNode;
	else {
		while (ptr->Link != NULL && ptr->Link->data < NewNode->data)
			ptr = ptr->Link;
	}
	NewNode->Link = ptr->Link;
	ptr->Link = NewNode;
}
int main() {
	int data[10] = { 211,160,173,86,90,232,4,228,244,212 };
	int cnt;

	Node* List = (Node*)malloc(sizeof(Node));
	List->Link = NULL;
	
	Node* Mynode;

	 for (cnt = 0; cnt < 10; cnt++) {
		Mynode = (Node *)malloc(sizeof(Node));
		Mynode->data = data[cnt];
		Mynode->Link = NULL;

		InsertNode(List, Mynode);

		// ch = getch();
	 }
	 Printout(List);
}

int Stack[10][10], SP[10];

void PushST(int tong, int num) {
	Stack[tong][SP[tong]] = num;
	SP[tong]++;
}

int PopST(int tong) {
	if (SP[tong] < 1) return -1;

	int val = Stack[tong][SP[tong] - 1];

	SP[tong]--;
	return val;
}

void popRight(int *data) {
	int c, val, wh = 0;
	for (c = 0; c < 10; c++) {
	// printf("%d\n", SP[c]);
	// getchar();
	while (SP[c] > 0) {
		val = PopST(c);
		printf("%4d", val);
		data[wh] = val;
		wh++;
	}
}
printf("\n\n");
}

void popLeft(int *data) {
	int c, val, wh = 0;
	for (c = 9; c >= 0; c--) {
		// printf("%d\n", SP[c]);
		// getchar();
		while (SP[c] > 0) {
			val = PopST(c);
			printf("%4d", val);
			data[wh] = val;
			wh++;
		}
	}
	printf("\n\n");
}

int main() {
	int c, cnt, su, sw;
	int gijun; // num = 0
	int data[10] = { 211,160,173,86,90,232,4,228,244,212 };
	// srand(time(NULL));

	gijun = 1;	sw = 0;
	for (su = 0; su < 3; su++) {
		for (cnt = 0; cnt < 10; cnt++) {
			// num = rand() % 25 + 50;
			c = data[cnt] % (gijun * 10) / gijun;
			PushST(c, data[cnt]);
		}
		if (sw == 0) {
			popRight(data);
			sw = 1;
		} else if (sw == 1) {
			popLeft(data);
			sw = 0;
		}

		gijun *= 10;
	}
}