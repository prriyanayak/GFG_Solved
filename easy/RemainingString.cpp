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
        char ch;
        cin >> ch;
        int count;
        cin >> count;
        int counter = 0;
        
        if (count == 0)
            cout << s << endl;
        else 
        {
            string news = "Empty string";
            for(int i = 0; i < s.size(); i++)
            {
                if (s[i] == ch)
                    counter += 1;
                if (count == counter)
                {
                    news = s.substr(i+1, s.size());
                    break;
                }
            }
            if (news.size() == 0)
                cout << "Empty string" << endl;
            else
                cout << news << endl;
        }
    }
	return 0;
}
