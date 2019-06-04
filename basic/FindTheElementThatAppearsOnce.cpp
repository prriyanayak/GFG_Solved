#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        if (arr[0] != arr[1])
            cout << arr[0] << endl;
        else if (arr[n-1] != arr[n-2])
            cout << arr[n-1] << endl;
        else
        {
            for(int i = 0; i < n-1; i+=2)
            {
                if (arr[i] != arr[i+1])
                {
                    cout << arr[i] << endl;
                    break;
                }
            }
        }
    }
}
