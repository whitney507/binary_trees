#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree using recursion it free the node
 * @tree: tree to free
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
