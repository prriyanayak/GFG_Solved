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
        int max_val = arr[0];
        int curr = arr[0];
        for(int i = 1; i < n; i++)
        {
            curr = max(arr[i], curr+arr[i]);
            max_val = max(max_val, curr);
        }
        cout << max_val << endl;
    }
    return 0;
}
