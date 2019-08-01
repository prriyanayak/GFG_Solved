int max(int a, int b)
{
    return a < b ? b : a;
}
int height(Node* root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

int diameter(Node* node)
{
    if (node == NULL)
        return 0;
    int l = height(node->left);
    int r = height(node->right);
    
    int dl = diameter(node->left);
    int dr = diameter(node->right);
    
    return max(l + r + 1, max(dl, dr));
}
