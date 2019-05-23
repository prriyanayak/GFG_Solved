#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, m;
        cin >> a >> b >> m;
        int count = 0;
        for(int i = a; i <= b; i++)
        {
            if (i%m == 0)
                count += 1;
        }
        cout << count << endl;
    }
    return 0;
}
