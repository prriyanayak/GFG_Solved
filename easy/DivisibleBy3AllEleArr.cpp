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
	    int ele;
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> ele;
	        sum += ele;
	    }
	    if (sum%3 == 0)
	        cout << 1 << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}
