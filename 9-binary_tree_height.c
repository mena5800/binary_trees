/*
 * file: 9-binary_tree_height.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, max;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		max = left;
	else
		max = right;

	return (1 + max);
}
