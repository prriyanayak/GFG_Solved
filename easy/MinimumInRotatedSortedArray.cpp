#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int ele)
{
    if (l > h)
        return -1;
    int mid = (l + h)/2;
    if (arr[mid] == ele)
        return mid+1;
    if (arr[l] <= arr[mid]) 
    { 
        if (ele >= arr[l] && ele <= arr[mid]) 
          return binarySearch(arr, l, mid-1, ele); 
    return binarySearch(arr, mid+1, h, ele); 
    } 
  
    if (ele >= arr[mid] && ele <= arr[h]) 
        return binarySearch(arr, mid+1, h, ele); 
  
    return binarySearch(arr, l, mid-1, ele);
}

int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int max1 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (max1 < arr[i])
                max1 = arr[i];
        }
        // cout << max1 << ": ";
        int indexMin = binarySearch(arr, 0, n-1, max1);
        // cout << indexMin << ":";
        if (indexMin == n)
            cout << arr[0] << endl;
        else
            cout << arr[indexMin] << endl;
    }
    return 0;
}
