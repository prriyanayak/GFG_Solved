bool isPalindrome(Node *head)
{
    Node* slow;
    slow = head;
    stack<int> st;
    while(slow != NULL)
    {
        st.push(slow->data);
        slow = slow->next;
    }
    while(head != NULL)
    {
        int x = st.top();
        st.pop();
        if (x != head->data)
            return false;
        head = head->next;
    }
    return true;
}
