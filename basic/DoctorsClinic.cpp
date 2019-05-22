#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x;
	    cin >> n >> x;
	    int total = 0;
	    if (x < 10)
	    {
	        total = (10-x)*(n-1);
	    }
	    cout << total << endl;
	}
	return 0;
}
