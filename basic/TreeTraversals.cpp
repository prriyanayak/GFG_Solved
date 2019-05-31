void inOrder(Node* root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preorder(Node* root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postOrder(Node* root)
{
    if (root == NULL)
        return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
