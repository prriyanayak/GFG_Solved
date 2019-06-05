#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n, ele;
        cin >> n >> ele;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int l = 0;
        int h = n-1;
        int mid, flag = 0;
        while(l <= h)
        {
            mid = (l+h)/2;
            if (arr[mid] == ele)    
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > ele)
                h = mid - 1;
            else
                l = mid + 1;
        }
        if (flag == 1) 
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
