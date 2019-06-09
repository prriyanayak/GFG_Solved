#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> final;
        int flag = 0;
        for(int i = 0; i < s.size(); i++)
        {
            final[s[i]] += 1;
            if (final[s[i]] > 1)
            {
                flag = 1;
                cout << s[i] << endl;
                break;
            }
        }
        if (flag == 0)
            cout << -1 << endl;
    }
	return 0;
}
