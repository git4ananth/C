// Ananth S
// 22BKT0095
// Binary Search Tree

// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Inorder Traversal
void inorder(struct node *root)
{
	if (root != NULL)
	{
		// Traverse left
		inorder(root->left);

		// Traverse root
		printf("%d -> ", root->data);

		// Traverse right
		inorder(root->right);
	}
}

// Insert a node
struct node *insert(struct node *node, int data)
{
	// Return a new node if the tree is empty
	if (node == NULL)
		return newNode(data);

	// Traverse to the right place and insert the node
	if (data < node->data)
		node->left = insert(node->left, data);
	else
		node->right = insert(node->right, data);

	return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node)
{
	struct node *current = node;

	// Find the leftmost leaf
	while (current && current->left != NULL)
		current = current->left;

	return current;
}

struct node *maxValueNode(struct node *node)
{
	struct node *current = node;

	// Find the leftmost leaf
	while (current && current->right != NULL)
		current = current->right;

	return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int data)
{
	if (root == NULL)
		return root;

	if (data < root->data)
		root->left = deleteNode(root->left, data);
	else if (data > root->data)
		root->right = deleteNode(root->right, data);
	else
	{
		// If the node is with only one child or no child
		if (root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}

		// If the node has two children
		struct node *temp = minValueNode(root->right);

		// Place the inorder successor in position of the node to be deleted
		root->data = temp->data;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

void menu()
{
	printf("1. Create a New Node\n");
	printf("2. Delete a Leaf Node\n");
	printf("3. Traverse through Tree\n");
	printf("4. Print the Max element\n");
	printf("5. Print the Min element\n");
	printf("6. Exit\n");
}
// Driver code
int main()
{
	struct node *root, *temp = NULL;

	printf("Inorder traversal: ");
	inorder(root);

	printf("\nAfter deleting 10\n");
	root = deleteNode(root, 10);
	printf("Inorder traversal: ");
	inorder(root);

	int choice, data;
	while (choice != 6)
	{
		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter the data : ");
			scanf("%d", &data);
			printf("\n");
			temp = insert(root, data);
			break;
		case 2:
			printf("Enter the data : ");
			scanf("%d", &data);
			printf("\n");
			temp = deleteNode(root, data);
			printf("Deleted Node is %d\n", temp->data);
			break;
		case 3:
			inorder(root);
			break;
		case 4:
			temp = maxValueNode(root);
			printf("Max Value : %d\n", temp->data);
			break;
		case 5:
			temp = minValueNode(root);
			printf("Min value : %d\n", temp->data);
			break;
		case 6:
			printf("Exiting...\n");
			exit(1);
			break;
		}
	}
}
