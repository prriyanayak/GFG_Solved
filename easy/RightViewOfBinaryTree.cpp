void rightViewUtil(Node* root, int level, int *max_level)
{
    if (root == NULL)
        return;
    if (*max_level < level)
    {
        cout << root->data << " ";
        *max_level = level;
    }
    
    rightViewUtil(root->right, level + 1, max_level);
    rightViewUtil(root->left, level + 1, max_level);
}
void rightView(Node *root)
{
   int max_level = 0;
   rightViewUtil(root, 1, &max_level);
}
