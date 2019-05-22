#include<bits/stdc++.h>
using namespace std;
int main()
{
	//codet
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
            cout << arr[arr[i]] << " ";
        cout << endl;
    }
	return 0;
}
