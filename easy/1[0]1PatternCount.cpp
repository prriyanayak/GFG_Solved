#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int count = 0, st = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if (st == 0)
            {
                if (s[i] == '1')
                    st = 1;
            }
            else if (st == 1)
            {
                if (s[i] == '0')
                    st = 2;
                else if (s[i] == '1')
                    st = 1;
                else
                    st = 0;
            }
            else if (st == 2)
            {
                if (s[i] == '0')
                {
                    st = 2;
                }
                else if (s[i] == '1')
                {
                    st = 3;
                    count += 1;
                }
                else
                    st = 0;
            }
            else if (st == 3)
            {
                if (s[i] == '0')
                    st = 2;
                else if (s[i] == '1')
                    st = 1;
                else
                    st = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
