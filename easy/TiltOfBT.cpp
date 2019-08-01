int traverse(Node* root, int* tilt)
{
    if(root == NULL)
        return 0;
    int l = traverse(root->left, tilt);
    int r = traverse(root->right, tilt);
    *tilt += abs(l-r);
    return l + r + root->val;
}
int tiltTree(Node* root)
{
	// Code here
	int tilt = 0;
	traverse(root, &tilt);
	return tilt;
}
