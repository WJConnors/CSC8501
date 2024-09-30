#include <iostream>

using namespace std;

class BST
{
    struct node { int value; struct node* left; struct node* right; };
    struct node* tree;
public:
    BST() :
        tree(NULL)
    {
    }

    ~BST()
    {
        terminate_tree(tree);
    }

    void insert_integer(int i)
    {
        insert_integer(&tree, i);
    }

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

    void print_tree()
    {
        print_tree(tree);
    }


    void print_tree(struct node* tree)
    {
        if (tree->left) { print_tree(tree->left); };
        cout << tree->value << endl;
        if (tree->right) { print_tree(tree->right); };
    }

    bool search_tree(int i)
    {
        return search_tree(tree, i);
    }

    bool search_tree(struct node* tree, int i)
    {
        if (!tree) return false;
        if (tree->value == i) { return true; }
        else if (search_tree(tree->left, i) || search_tree(tree->right, i))
        {
            return true;
        }
        return false;
    }

    void terminate_tree(struct node* tree)
    {
        if (tree->left) { terminate_tree(tree->left); };
        if (tree->right) { terminate_tree(tree->right); };
        cout << "deleting " << tree->value << endl;
        delete(tree);
    }
};

int main()
{
    BST* tree = new BST();
    tree->insert_integer(5);
    tree->insert_integer(3);
    tree->insert_integer(4);
    tree->insert_integer(6);
    tree->insert_integer(2);
    cout << tree->search_tree(4) << endl;
    cout << tree->search_tree(6) << endl;
    cout << tree->search_tree(7) << endl;
    tree->print_tree();
    delete tree;
}

