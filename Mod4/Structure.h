// Structure for tree nodes
typedef struct Node {
	char character;
	int freq;
	struct Node *l, *r;
}Node;

// Structure for min heap
typedef struct Min_Heap {
	int size;
	struct Node** array;
}Min_Heap;

// Structure to store codes in compressed file
typedef struct code {
	char k;
	int l;
	int code_arr[16];
	struct code* p;
} code;


typedef struct Tree {
	char g;
	int len;
	int dec;
	struct Tree* f;
	struct Tree* r;
} Tree;