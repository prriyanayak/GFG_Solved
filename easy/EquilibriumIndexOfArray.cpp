int findEquilibrium(int A[], int n)
{
    int index = -1;
    int sum = 0;
    int leftSum = 0;
    // int rightSum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum -= A[i];
        if (leftSum == sum)
            return i;
        leftSum = leftSum + A[i];
    }
    return index;
}
