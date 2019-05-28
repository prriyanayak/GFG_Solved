bool Compute(Node* root)
{
    string news;
    while(root != NULL)
    {
        news += root->data;
        root = root->next;
    }
    string reversed = news;
    reverse(news.begin(), news.end());
    if (reversed == news)
        return 1;
    else 
        return 0;
}
