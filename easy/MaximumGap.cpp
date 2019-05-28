#include<bits/stdc++.h>
using namespace std;
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int maxDiff = 0;
        for(int i = 0; i < n-1; i++)
        {
            int diff = arr[i+1] - arr[i];
            if (maxDiff < diff)
                maxDiff = diff;
        }
        cout << maxDiff << endl;
    }
    return 0;
}
