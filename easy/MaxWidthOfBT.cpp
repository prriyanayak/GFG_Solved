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
int getWidth(Node* root, int l)
{
    if (root == NULL)
        return 0;
    if (l == 1)
        return 1;
    return getWidth(root->left, l-1) + getWidth(root->right, l-1);
}
int getMaxWidth(Node* root)
{
   int maxW = 0, w;
   for(int i = 1; i <= height(root); i++)
   {
        w = getWidth(root, i);
        if (w > maxW)
            maxW = w;
   }
   return maxW;
}
