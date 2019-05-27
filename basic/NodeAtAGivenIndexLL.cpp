int GetNth(struct node* head, int index)
{
    // cout << index << endl;
    int count = 0;
    while(head != NULL)
    {
        // cout << count << ":" << index << ":" << head->data << endl;
        // cout << head->data << ":" << count << endl;
        if (count == index)
            return head->data;
        head = head->next;
        count += 1;
    }
    return -1;
}
