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
	    
	    if (n%2 == 0)
	        cout << (unsigned long int)pow(2,pow(3,(n-1)/2)) << endl;
	    else
	        cout << (unsigned long int)pow(2,pow(2,(n-1)/2)) << endl;
	}
	return 0;
}
