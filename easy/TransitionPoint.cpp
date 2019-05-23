int transitionPoint(int arr[],int n)
{
    int lb = 0;
    int ub = n;
    int mid;
    int ele;
    while(lb <= ub)
    {
        mid = (lb + ub)/2;
        if (arr[mid] == 1 && arr[mid-1] == 0)
        {
            ele = mid;
            break;
        }
        else if (arr[mid] == 0)
            lb = mid + 1;
        else if (arr[mid] == 1 && arr[mid-1] == 1)
            ub = mid - 1;
    }
    return ele;
}
