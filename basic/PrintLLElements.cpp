void display(Node *head)
{
  //your code goes here
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
