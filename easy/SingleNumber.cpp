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
        int x = 0;
        int data;
        for(int i = 0; i < n; i++)
        {
            cin >> data;
            x = x ^ data;
        }
        cout << x << endl;
    }
    return 0;
}
