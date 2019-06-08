struct node* makeUnion(struct node* head1, struct node* head2)
{
    if(head1 == NULL && head2 == NULL) return NULL;
    set<int> dataset;
    while(head1 != NULL)
    {
        dataset.insert(head1->data);
        head1 = head1->next;
    }
    while(head2 != NULL)
    {
        dataset.insert(head2->data);
        head2 = head2->next;
    }
    for(auto itr = dataset.begin(); itr != dataset.end(); itr++)
        cout << *itr << " ";
    // cout << endl;
    return NULL;
}
