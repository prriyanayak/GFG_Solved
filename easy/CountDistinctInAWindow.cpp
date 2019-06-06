void countDistinct(int A[], int k, int n)
{
    int arr[101]= {0};
    int distinct = 0;
    for(int i = 0; i < k; i++)
    {
        // cout << A[i] << ":" << arr[A[i]] << endl;
        if (arr[A[i]] == 0)
        {
            distinct += 1;            
        }
        arr[A[i]] += 1;
    }
    cout << distinct << " ";
    for(int i = k; i < n; i++)
    {
        if (arr[A[i-k]] == 1)
        {
            distinct -= 1;
        }
        arr[A[i-k]] -= 1;
        // cout << A[i-k] << ":" << arr[A[i-k]] << endl;
        if (arr[A[i]] == 0)
        {
            distinct += 1;            
        }
        arr[A[i]] += 1;
        cout << distinct <<" ";
    }
}
