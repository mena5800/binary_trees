/*
 * file: 0-binary_tree_node.c
 * name: Mina Safwat Samy
 * date: 31 Aug 2023
 */

#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *my_tree = malloc(sizeof(binary_tree_t));

	if (my_tree == NULL)
	{
		return (NULL);
	}

	my_tree->n = value;
	my_tree->parent = parent;
	my_tree->left = NULL;
	my_tree->right = NULL;

	return (my_tree);
}
