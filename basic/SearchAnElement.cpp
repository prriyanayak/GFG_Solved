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
        int x;
        cin >> x;
        int low = 0;
        int high = n-1;
        int mid;
        int flag = 0;
        while(low <= high)
        {
            mid = (low+high)/2;
            if (arr[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        if (flag == 1)
            cout << mid << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
