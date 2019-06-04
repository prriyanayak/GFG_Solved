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
        int max = -1;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (ele > max)
                max = ele;
        }
        cout << max << endl;
    }
    return 0;
}
