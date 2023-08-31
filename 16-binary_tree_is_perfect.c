/*
 * file: 16-binary_tree_is_perfect.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: if tree is is perfect return 1 otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if ((left == right) && binary_tree_is_full(tree))
		return (1);

	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	return (1 + left);
}

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
