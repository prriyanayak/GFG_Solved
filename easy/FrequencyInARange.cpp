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
        int arr[n] = {0};
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr[ele-1]++;
        }
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
	return 0;
}
