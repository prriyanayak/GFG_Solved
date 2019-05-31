int height(Node* node)
{
    if (node == NULL)
        return 0;
    int leftTree = height(node->left);
    int rightTree = height(node->right);
    int height = max(leftTree, rightTree) + 1;
    return height;
}
