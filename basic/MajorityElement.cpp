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
        int h[1000000] = {0};
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            h[ele]++;
        }
        int flag = 0;
        
        int i;
        for(i = 0; i < 1000000; i++)
        {
            if (h[i] > (n/2))
            {
                flag = 1;
                break;
            }
        }
        // cout << i << ":" << h[i] << endl;
        if ((flag == 1 && h[i] == 1) || (flag == 0))
            cout << -1 << endl;
        else
            cout << i << endl;
    }
    return 0;
}
