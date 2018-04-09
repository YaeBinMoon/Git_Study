#include <string.h>
#include "Sortings.h"

/* Transerve of Tree */
#if 0
int main(void)
{
	BNode* A = CreateNode('A');
	BNode* B = CreateNode('B');
	BNode* C = CreateNode('C');
	BNode* D = CreateNode('D');
	BNode* E = CreateNode('E');
	BNode* F = CreateNode('F');
	BNode* G = CreateNode('G');

	A->LeftChild = B;
	A->RightChild = E;
	B->LeftChild = C;
	B->RightChild = D;
	E->LeftChild = F;
	E->RightChild = G;

	printf("PreOrder..\n");
	Preorder(A);
	printf("\n");

	printf("InOrder..\n");
	Inorder(A);
	printf("\n");

	printf("PostOrder..\n");
	Postorder(A);
	printf("\n");

	return 0;
}
#endif

int main(void)
{
	int Dataset[] = { 6,4,2,3,1,5 };
	int i;
	int len = sizeof(Dataset) / sizeof(int);

	SelectionSort(Dataset, len);
	printf("> Sort\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", Dataset[i]);
	}
	printf("\n");
	return 0;
}
