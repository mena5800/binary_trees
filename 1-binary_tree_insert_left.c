/*
 * file: 1-binary_tree_insert_left.c
 * name: Mina Safwat Samy
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in.
 * @value: is the value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_tree;

	if (parent == NULL)
	{
		return (NULL);
	}

	my_tree = malloc(sizeof(binary_tree_t));

	if (my_tree == NULL)
	{
		return (NULL);
	}

	my_tree->n = value;
	my_tree->parent = parent;
	my_tree->right = NULL;
	my_tree->left = parent->left;
	parent->left = my_tree;

	if (my_tree->left)
		my_tree->left->parent = my_tree;

	return (my_tree);
}
