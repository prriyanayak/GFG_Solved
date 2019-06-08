#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    map<string, int> hash;
	    for(int i = 0; i < n; i++)
	    {
	        string s;
	        cin >> s;
	        hash[s] += 1;
	    }
	    int max_val = 0;
	    string finalString;
	   // map<string, int>::iterator itr;
	    for(auto itr = hash.begin(); itr != hash.end(); itr++)
	    {
	        if (itr->second > max_val)
	            max_val = itr->second;
	    }
	    for(auto itr = hash.begin(); itr != hash.end(); itr++)
	    {
	        if (itr->second == max_val)
	        {
	            finalString = itr->first;
	            break;
	        }
	    }
	    cout << finalString << " " << max_val << endl;
	}
	return 0;
}
