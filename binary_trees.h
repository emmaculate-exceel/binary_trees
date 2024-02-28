#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/**standard library*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**Basic Binary Tree*/
/**
 * struct binary_trees_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
 
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *right;
	struct binary_tree_s *left;
};
/**Typedefine for Binary Tree*/
typedef struct binary_tree_s binary_tree_t;

/**Typdefine for Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/**Typedefine for Avl Tree*/
typedef struct binary_tree_s avl_t;

/**Typedefine for Binary Heap*/
typedef struct binary_tree_s heap_t;
/**binary_print_functions for the code*/
/** prototype for the binary_tree_print.c */
/**static int print_t(const binary_tree_t *tree,int offset, int depth, char **s);
static size_t _height(const binary_tree *tree);
void binary_tree_print(const binary_tree_t *tree);*/
/** the protype for binary_tree_print.c ends on this line === 42 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int));
void binary_tree_postorder(const binary_tree_t *tree,void(*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_size_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *tree);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/**advance task for the project ;*/
#endif 
