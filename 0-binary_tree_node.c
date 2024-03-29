#include "binary_trees.h"
/**
 *binary_tree_node - struct that creates a node
 *@parent: pointer to the parent node of the node to create
 *@value: value to be passed into the new node
 *
 *Return: always 0;
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t *));

	if (newnode == NULL)
	  {
	    return (NULL);
	  }
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->parent = parent;
	newnode->n = value;

	return (newnode);
}
