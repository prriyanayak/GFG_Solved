long int sumBT(Node* root)
{
    if (root == NULL)
        return 0;
    return (root->key + sumBT(root->left) + sumBT(root->right));
}
