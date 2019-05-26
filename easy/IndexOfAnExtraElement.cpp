int findExtra(int a[],int b[],int n)
{
    //add code here.
    int i, j;
    for(i = 0, j = 0; i < n, j < n-1; i++, j++)
    {
        if (a[i] != b[j])
            return i;
    }
    return i;
}
