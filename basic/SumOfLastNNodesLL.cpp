int sumOfLastN_Nodes(struct Node* head, int n)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count += 1;
        temp = temp->next;
    }
    int x = count - n;
    while(x--)
    {
        head = head->next;
    }
    int sum = 0;
    while(head != NULL)
    {
        sum += head->data;
        head = head->next;
    }
    // cout << head->data << " ";
    return sum;
}   
