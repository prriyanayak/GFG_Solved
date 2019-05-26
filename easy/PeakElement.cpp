int peakElement(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i+1] && arr[i] > arr[i-1])
            return i;
    }
    return 0;
}
