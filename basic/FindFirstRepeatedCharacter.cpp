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
        for(int i = 0; i < s.size(); i++)
        {
            final[s[i]] += 1;
        }
        // int flag = 1;
        // char c;
        for(auto itr = final.begin(); itr != final.end(); itr++)
        {
            if (itr->second > 1)
            {
                cout << itr->first << endl;
                break;
            }
        }
    }
	return 0;
}
