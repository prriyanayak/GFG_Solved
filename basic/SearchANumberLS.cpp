#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int flag = 0;
        int i;
        for(i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << -1 << endl;
        else
            cout << i+1 << endl;
        
    }
	return 0;
}
