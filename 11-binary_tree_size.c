/*
 * file: 11-binary_tree_size.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the size.
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
