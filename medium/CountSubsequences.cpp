#include<bits/stdc++.h>
using namespace std;
int countSub(string s)
{
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            a = (1 + 2 * a);
        else if (s[i] == 'b')
            b = (a + 2 * b);
        else if (s[i] == 'c')
            c = (b + 2 * c);
    }
    return c;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    cout << countSub(s) << endl;
	}
	return 0;
}
