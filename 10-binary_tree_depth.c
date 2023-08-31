/*
 * file: 10-binary_tree_depth.c
 * name: Mina Safwat
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the depth.
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
