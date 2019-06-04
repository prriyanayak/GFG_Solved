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
        int h[100000] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            h[arr[i]]++;
        }
        int k;
        cin >> k;
        int i;
        for(i = 0; i < 100000; i++)
        {
            if(h[i] >= 1)
                k--;
            if (k == 0)
                break;
        }
        cout << i << endl;
    }
    return 0;
}
