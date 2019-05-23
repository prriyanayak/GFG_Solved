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
        int k = 0;
        for(int i = 0; i < n-1; i++)
        {
            if (i%2 == 0)
            {
                cout << arr[n-1-k] << " " << arr[k] << " ";
                k++;
            }
        }
        if (n%2 != 0)
            cout << arr[n-1-k] << " ";
        cout << endl;
    }
    return 0;
}
