int getNthFromLast(Node *head, int n)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count += 1;
        temp = temp->next;
    }
    int actualIndex = count - n;
    count = 0;
    while(head != NULL)
    {
        // cout << count << ":" << index << ":" << head->data << endl;
        // cout << head->data << ":" << count << endl;
        if (count == actualIndex)
            return head->data;
        head = head->next;
        count += 1;
    }
    return -1;
    // return -1;
}
