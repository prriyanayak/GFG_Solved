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
        int flag = 0;
        int i;
        for(i = 0; i < n; i++)
        {
            if (x == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << i << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
