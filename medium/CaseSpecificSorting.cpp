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
        string Upper;
        string Lower;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
                Lower += s[i];
            else
                Upper += s[i];
        }
        sort(Lower.begin(), Lower.end());
        sort(Upper.begin(), Upper.end());
        int lower = 0, upper = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
            {
                cout << Lower[lower];
                lower += 1;
            }
            else
            {
                cout << Upper[upper];
                upper += 1;
            }
        }
        cout << endl;
        // cout << Upper << ":" << Lower << endl;
    }
    return 0;
}
