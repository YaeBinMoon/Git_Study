#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct BST_tag
{
	struct BST_tag* Left;
	struct BST_tag* Right;
	ElementType Data;
}BST_Node;

#endif
