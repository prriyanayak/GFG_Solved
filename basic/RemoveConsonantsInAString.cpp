#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        string news;
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        // cout << s;
        for(int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == ' ' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                news += s[i];
                
        }
        if (news.size() == 0)
            cout << "No Vowel" << endl;
        else
            cout << news << endl;
    }
    return 0;
}
