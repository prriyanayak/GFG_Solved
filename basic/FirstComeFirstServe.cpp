#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        map<int, int> frequencies;

        int flag = -1;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frequencies[arr[i]] += 1;
        }
        for(int i = 0; i < n; i++)
        {
            int count = frequencies[arr[i]];
            if (count == k)
            {
                flag = arr[i];
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
}
