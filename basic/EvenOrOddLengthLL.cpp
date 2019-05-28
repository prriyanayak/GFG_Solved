int isLengthEvenOrOdd(struct Node* head)
{
     int count = 0;
     while(head != NULL)
     {
         count += 1;
         head = head->next;
     }
     return (count%2 == 0 ? 0 : 1);
}
