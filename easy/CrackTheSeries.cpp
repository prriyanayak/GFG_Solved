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
	        printf("%.0LF", (long double)pow(2,pow(3,(n-1)/2)));
	    else
	        printf("%.0LF", (long double)pow(2,pow(2,(n-1)/2)));
	    cout << endl;
	}
	return 0;
}
