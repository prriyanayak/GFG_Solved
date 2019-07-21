int MaxSum(struct Node* root, int &res)
{
    if (root == NULL)
        return 0;
    int l = MaxSum(root->left, res);
    int r = MaxSum(root->right, res);
    
    int max_single = max(max(l, r) + root->data, root->data);
    int max_top    = max(max_single, l + r + root->data);
    
    res = max(max_top, res);
    return max_single;
}
int maxPathSum(struct Node *root)
{
    int res = INT_MIN;
    MaxSum(root, res);
    return res;
}
