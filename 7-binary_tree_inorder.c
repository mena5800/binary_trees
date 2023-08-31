/*
 * file: 7-binary_tree_inorder.c
 * name: Mina Safwat Samy
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func: is a pointer to a function to call for each node.
 *
 * If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
