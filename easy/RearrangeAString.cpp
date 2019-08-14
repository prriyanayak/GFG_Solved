#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<char> letters;
        int sum = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            int x = s[i] - '0';
            if (x >= 0 && x <= 9)
                sum += x;
            else
                letters.push_back(s[i]);
        }
        sort(letters.begin(), letters.end());
        for(int i = 0; i < letters.size(); i++)
            cout << letters[i];
        cout << sum << endl;
    }
	return 0;
}
