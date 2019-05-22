vector<int> formatArray(vector<int> a,int n)
{
    for(int i = 0; i < a.size(); i++)
    {
        if (i%2 != 0 && a[i] < a[i-1])
        {
            int temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
    }
    return a;
}
