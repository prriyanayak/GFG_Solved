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
        string s;
        cin >> s;
        int i = n-1;
        if (s[i]%2 == 0 && s[i] != 0)
            cout << "EVEN" << endl;
        else
        {
            while(s[i]=='0')
                i--;
            if (s[i]%2==0)
                cout <<"EVEN" << endl;
            else
                cout << "ODD" << endl;
        }
    }
    return 0;
}
