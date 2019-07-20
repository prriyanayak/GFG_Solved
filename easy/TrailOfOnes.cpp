#include<bits/stdc++.h>
using namespace std;

long long int withoutCons(int n)
{
    int a[n], b[n];
    a[0] = b[0] = 1;
    for(int i = 1; i < n; i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    return (1<<n) - a[n-1] - b[n-1];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    long long int noCons = withoutCons(n);
	    cout << noCons << endl;
	}
	return 0;
}
