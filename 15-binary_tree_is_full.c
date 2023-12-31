/*
 * file: 15-binary_tree_is_full.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree
 * to check.
 *
 * Return: if tree is NULL or not full return 0
 * othewise return 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
