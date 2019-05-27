int countPairs(struct Node* head1, struct Node* head2,	int x)
{
    struct Node *temp;
    int count = 0;
    while(head1 != NULL)
    {
        temp = head2;
        while(temp != NULL)
        {
            if((head1->data+temp->data) == x)
                count += 1;
            temp = temp->next;
        }
        head1 = head1->next;
    }
    return count;
}
