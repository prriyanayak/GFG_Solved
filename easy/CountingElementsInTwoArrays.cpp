void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if (arr1[i] >= arr2[j])
                count += 1;
        }
        cout << count << " ";
    }
    // cout << endl;
}
