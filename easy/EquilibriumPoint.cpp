#include<bits/stdc++.h>
using namespace std;
int getPoint(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    int sl = 0;
    for(int i = 0; i < n; i++)
    {
        sum -= arr[i];
        if (sl == sum)
            return i+1;
        sl += arr[i];
    }
    return -1;
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
        if(n == 1)
        {
            int ele;
            cin >> ele;
            cout << 1 << endl;
        }
        else
        {
            int arr[n];
            for(int i = 0; i < n; i++) 
                cin >> arr[i];
            cout << getPoint(arr, n) << endl;
        }
    }
    return 0;
}
