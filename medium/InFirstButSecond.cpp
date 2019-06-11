#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int a[n];
        set<long long int> b;
        long long int ele;
        for(long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(long long int i = 0; i < m; i++)
        {
            cin >> ele;
            b.insert(ele);
        }
        for(long long int i = 0; i < n; i++)
        {
            if (b.find(a[i]) == b.end())
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
