bool isFoldableFunc(struct node* left, struct node* right)
{
    if (left == NULL && right == NULL)  
        return true;
    if (left == NULL || right == NULL)
        return false;
    return (isFoldableFunc(left->left, right->right) && isFoldableFunc(left->right, right->left));
}
bool isFoldable(struct node *root)
{
    if (root == NULL)
        return true;
    return isFoldableFunc(root->left, root->right);
}
