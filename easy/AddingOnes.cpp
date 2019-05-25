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
        int arr[n+1];
        memset(arr, 0, (n+1)*sizeof(int));

        for(int i = 0; i < k; i++)
        {
            int q;
            cin >> q;
            int j = n-1;
            while(j >= q-1)
            {
                arr[j] += 1;
                j--;
            }
        }
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
