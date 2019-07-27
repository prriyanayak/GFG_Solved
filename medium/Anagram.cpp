#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    int value = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        value = value ^ (int)s1[i] ^ (int)s2[i];
    }
    return value == 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string s1, s2;
	    cin >> s1 >> s2;
	    if (isAnagram(s1, s2))
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	    return 0;
}
