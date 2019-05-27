int bin_search(int A[], int left, int right, int k)
{
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if (A[mid] == k)
            return mid;
        else if (A[mid] < k)
            left = mid + 1;
        else
            right = mid + 1;
    }
    return -1;
}
