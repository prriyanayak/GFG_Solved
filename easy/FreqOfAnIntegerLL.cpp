int count(struct node* head, int search_for)
{
    int count = 0;
    while(head != NULL)
    {
        if (head->data == search_for)
            count += 1;
        head = head->next;
    }
    return count;
}
