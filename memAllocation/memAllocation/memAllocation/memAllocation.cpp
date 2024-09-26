#include <iostream>

using namespace std;


struct node { int value; struct node* left; struct node* right; };

struct node* root = NULL;

// implement the functions described by these headers

void insert_integer(struct node** tree, int value)
{
	if (!*tree)
	{
		*tree = new node{ value, NULL, NULL };
	}
	else {
		value < (*tree)->value ?
			insert_integer(&(*tree)->left, value) :
			insert_integer(&(*tree)->right, value);
	}
}

void print_tree(struct node* tree)
{
	if (tree->left) { print_tree(tree->left); };
	cout << tree->value << endl;
	if (tree->right) { print_tree(tree->right); };
}

void terminate_tree(struct node* tree)
{
	if (tree->left) { terminate_tree(tree->left); };
	if (tree->right) { terminate_tree(tree->right); };
	cout << "deleting " << tree->value << endl;
	delete(tree);
}

int most_common_integer(struct node* tree)
{
	
}

int largest_integer(struct node* tree)
{
	return tree->right ? largest_integer(tree->right) : tree->value;
}

int summ_of_all_integers(struct node* tree)
{
	int sum = 0;
	if (tree->left) { sum += summ_of_all_integers(tree->left); };
	if (tree->right) { sum += summ_of_all_integers(tree->right); };
	sum += tree->value;
	return sum;
}

// Main function

int main() {

	node* tree = root;
	insert_integer(&tree, 5);
	insert_integer(&tree, 3);
	insert_integer(&tree, 6);
	insert_integer(&tree, 5);
	insert_integer(&tree, 9);
	insert_integer(&tree, 4);
	insert_integer(&tree, 5);
	insert_integer(&tree, 1);
	insert_integer(&tree, 3);
	print_tree(tree);
	cout << "largest integer: " << largest_integer(tree) << endl;
	cout << "summ of all integers: " << summ_of_all_integers(tree) << endl;
	terminate_tree(tree);

	return 0;
}