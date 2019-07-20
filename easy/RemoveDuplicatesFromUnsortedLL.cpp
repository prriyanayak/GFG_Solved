Node *removeDuplicates(Node *root)
{
    if (root == NULL)
        return NULL;
    Node* current = root;
    Node* next_next = NULL;
    set<int> values;
    while(current != NULL)
    {
        if (values.find(current->data) != values.end())
        {
            next_next->next = current->next;
            delete(current);
        }
        else
        {
            values.insert(current->data);
            next_next = current;
        }
        current = next_next->next;
    }
    return root;
}
