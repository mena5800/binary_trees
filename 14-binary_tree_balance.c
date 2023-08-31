/*
 * file: 14-binary_tree_balance.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree
 * to measure the balance factor.
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
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
	size_t left, right, max;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		max = left;
	else
		max = right;

	return (1 + max);
}
