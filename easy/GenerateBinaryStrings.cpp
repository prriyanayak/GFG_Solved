#include<bits/stdc++.h>
using namespace std;

void getBinaryString(string s)
{
    queue<string> q;
    q.push(s);
    while(!q.empty())
    {
        string y = q.front();
        size_t in = y.find('?');
        if (in != string::npos)
        {
            y[in] = '0';
            q.push(y);
            
            y[in] = '1';
            q.push(y);
        }
        else
            cout << y << " ";
        q.pop();
    }
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    getBinaryString(s);
	    cout << endl;
	}
	return 0;
}
