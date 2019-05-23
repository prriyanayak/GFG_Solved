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
        char lastElement = s[s.size()-1];
        char secondLast = s[s.size()-2];
        string final;
        final += secondLast;
        final += lastElement;
        // cout << final;
        // cou
        int num = atoi(final.c_str());
        if (num%4 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
