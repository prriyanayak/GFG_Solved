void push(int a)
{
     s.push(a);
}
bool isFull(int n)
{
    if (s.size() == n)
        return true;
    return false;
}
bool isEmpty()
{
    if (s.size() == 0)
        return true;
    return false;
}
int pop()
{
    int x = s.top();
    s.pop();
    return x;
}
int getMin()
{
   stack<int> st;
   int val = s.top();
   while(!(s.empty()))
   {
        if (st.empty())
            st.push(s.top());
        if (!(st.empty()))
        {
            if (val > s.top())
            {
                val = s.top();
                st.push(val);
            }
        }
        s.pop();
   }
   
    return st.top();
}
