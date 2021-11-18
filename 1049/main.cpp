#include <iostream>
using namespace std;
 
class BST
{
    string data;
    BST *left, *right;
 
public:
    // Default constructor.
    BST();
 
    // Parameterized constructor.
    BST(string);
 
    // Insert function.
    BST* Insert(BST*, string);
 
    // Inorder traversal.
    void Inorder(BST*);
};
 
// Default Constructor definition.
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
 
// Parameterized Constructor definition.
BST ::BST(string value)
{
    data = value;
    left = right = NULL;
}
 
// Insert function definition.
BST* BST ::Insert(BST* root, string value)
{
    if (!root)
    {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }
 
    // Insert data.
    if (value > root->data)
    {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process right nodes.
        root->right = Insert(root->right, value);
    }
    else
    {
        // Insert left node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process left nodes.
        root->left = Insert(root->left, value);
    }
 
    // Return 'root' node, after insertion.
    return root;
}
 
// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 
// Driver code
int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, "animal");
    b.Insert(root, "vertebrado");
    b.Insert(root, "ave");
    b.Insert(root, "mamifero");
    b.Insert(root, "carnivoro");
    b.Insert(root, "onivoro");
    b.Insert(root, "aguia");
    b.Insert(root, "pomba");
 
    b.Inorder(root);
    return 0;
}