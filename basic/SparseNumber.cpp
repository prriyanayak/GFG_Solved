#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    int count = 0;
	    while(x)
	    {
	        x = x & (x << 1);
	        count += 1;
	    }
	   // cout << count;
	    if (count > 1)
	        cout << 0 << endl;
	    else
	        cout << 1 << endl;
	}
	return 0;
}
