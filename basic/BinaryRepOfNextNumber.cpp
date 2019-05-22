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
        string news;
        // int count = 0;
        int i;
        for(i = s.size()-1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                // count = 1;
                break;
            }    
            else
                s[i] = '0';
        }
        if (i < 0)
            s = "1" + s;
        reverse(s.begin(), s.end());
        i = s.size()-1;
        while(s[i] != '1')
        {
            s.pop_back();
            i--;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
        
    }
return 0;
}
