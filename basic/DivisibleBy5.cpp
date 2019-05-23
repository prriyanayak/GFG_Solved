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
        int lastElement = s[s.size()-1]-'0';
        if (lastElement == 0 || lastElement == 5)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
