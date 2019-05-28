int modularNode(Node* head, int k)
{
    int count;
    int index = 1;
    Node *temp = head;
    while(head != NULL)
    {
        // cout << index << ":" << k << endl;
        if (index%k == 0)
            count = index;
        index += 1;
        head = head->next;
    }
    // cout << count << endl;
    int newindex = 1;
    while(temp != NULL)
    {
        if (count == newindex)
            return temp->data;
        newindex += 1;
        temp = temp->next;
    }
    return -1;
}
