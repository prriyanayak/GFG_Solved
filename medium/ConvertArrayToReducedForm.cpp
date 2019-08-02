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
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a.push_back(make_pair(arr[i], i));
        }
        sort(a.begin(), a.end());
        for (int i=0; i<n; i++) 
            arr[a[i].second] = i; 
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
