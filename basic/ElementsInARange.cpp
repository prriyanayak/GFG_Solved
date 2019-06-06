#include<bits/stdc++.h>
using namespace std;

int getIndex(int arr[], int n, int ele)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int flag = 0;
        int lower = getIndex(arr, n, a);
        int higher = getIndex(arr, n, b);
        if (lower == -1 || higher == -1)
            flag = 1;
        else
        {
            int number = a;
            for(int i = lower; i < higher; i++)
            {
                if (arr[i] != number)
                {
                    flag = 1;
                    break;
                }
                number += 1;
            }
        }
        if (flag == 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
