int lastOccur(int arr[], int ele, int n)
{
    // cout << n << endl;
    for(int j = (n-1); j >= 0; j--)
    {
        if (arr[j] == ele)
        {
            return j;
        }
    }
    return -1;
}
int maxDistance(int arr[], int n)
{
    //lastOccurrence - firstOccurrence
    int lastOccurrence;
    int maxDiff = -1;
    for(int i = 0; i < n; i++)
    {
        lastOccurrence = lastOccur(arr, arr[i], n);
        // cout << lastOccurrence << endl;
        if ((lastOccurrence-i) > maxDiff)
            maxDiff = (lastOccurrence - i);
    }
    return maxDiff;
}
