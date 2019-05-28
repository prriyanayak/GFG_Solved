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
        string pattern;
        cin >> s;
        cin >> pattern;
        int index = s.find(pattern);
        if (index >= 0)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
	}
	return 0;
}
