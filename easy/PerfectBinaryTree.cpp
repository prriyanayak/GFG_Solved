bool isPerfectRec(struct Node* root, int d, int level )
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return (d == level + 1);
    if (root->left == NULL || root->right == NULL)
        return false;
        
    return isPerfectRec(root->left, d, level + 1) && isPerfectRec(root->right, d, level + 1);
}
