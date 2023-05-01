#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

void menu();
TreeNode *createNode(int data);
TreeNode *insert(TreeNode *root, int data);
TreeNode *delete(TreeNode *root, int key);
TreeNode *search(TreeNode *root, int key);
TreeNode *minValueNode(TreeNode *node);
TreeNode *maxValueNode(TreeNode *node);
int countNodes(struct TreeNode *node);
struct TreeNode *findNodeAtPosition(struct TreeNode *node, int position);

// Traversals
void inorderTraversal(TreeNode *root);
void preorderTraversal(struct TreeNode *node);
void postorderTraversal(struct TreeNode *node);


int main()
{
    TreeNode *root = NULL;
    int choice, data, position;

    do
    {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the data to insert: ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            printf("\nEnter the key to search: ");
            scanf("%d", &data);
            if (search(root, data) == NULL)
            {
                printf("Key not found in the tree.\n");
            }
            else
            {
                printf("Key found in the tree.\n");
            }
            break;
        case 3:
            printf("\nEnter the key to delete: ");
            scanf("%d", &data);
            root = delete (root, data);
            printf("Node with key %d deleted from the tree.\n", data);
            break;
        case 4:
            printf("\nMinimum value in the BST: %d\n", minValueNode(root)->data);
            break;
        case 5:
            printf("\nMaximum value in the BST: %d\n", maxValueNode(root)->data);
            break;
        case 6:
            printf("\nInorder Traversal of BST: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 7:
            printf("Enter position to find : ");
            scanf("%d", &position);
            struct TreeNode *temp = findNodeAtPosition(root, position);
            if (temp != NULL)
            {
                printf("Element at position %d: %d\n", position, temp->data);
            }
            break;
        case 8:
            printf("\nExiting...\n");
            exit(0);
        default:
            printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void menu()
{
    printf("\nBinary Search Tree Operations\n");
    printf("1. Insertion\n");
    printf("2. Search\n");
    printf("3. Deletion\n");
    printf("4. Find Minimum Value\n");
    printf("5. Find Maximum Value\n");
    printf("6. Inorder Traversal\n");
    printf("7. Find element at given position\n");
    printf("8. Exit\n");
}
TreeNode *createNode(int data)
{
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode *insert(TreeNode *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

TreeNode *delete(TreeNode *root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data)
    {
        root->left = delete (root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delete (root->right, key);
    }
    else
    {
        // Case 1: No child or only one child
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }

        // Case 2: Two children
        TreeNode *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }

    return root;
}

//TRAVERSALS
// InOrder => Left, Root, Right.
void inorderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d", root->data);
        inorderTraversal(root->right);
    }
}
// closure being used here

// PreOrder => Root, Left, Right.
void preorderTraversal(struct TreeNode *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    preorderTraversal(node->left);

    preorderTraversal(node->right);
}

// PostOrder => Left, Right, Root.
void postorderTraversal(struct TreeNode *node)
{
    if (node == NULL)
        return;

    postorderTraversal(node->left);

    postorderTraversal(node->right);

    printf("%d ", node->data);
}

TreeNode *search(TreeNode *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

TreeNode *minValueNode(TreeNode *node)
{
    TreeNode *current = node;

    while (current && current->left != NULL)
    {
        current = current->left;
    }

    return current;
}

TreeNode *maxValueNode(TreeNode *node)
{
    TreeNode *current = node;
    while (current && current->right != NULL)
    {
        current = current->right;
    }

    return current;
}

int countNodes(struct TreeNode *node)
{
    if (node == NULL)
    {
        return 0;
    }

    return countNodes(node->left) + countNodes(node->right) + 1;
}

struct TreeNode *findNodeAtPosition(struct TreeNode *node, int position)
{
    int numNodes = countNodes(node);
    if (position >= numNodes)
    {
        printf("Error: Position %d is out of range (max = %d)\n", position, numNodes - 1);
        return NULL;
    }

    int leftChildren = countNodes(node->left);

    if (position < leftChildren)
    {
        return findNodeAtPosition(node->left, position);
    }
    else if (position > leftChildren)
    {
        return findNodeAtPosition(node->right, position - leftChildren - 1);
    }
    else
    {
        return node;
    }
}