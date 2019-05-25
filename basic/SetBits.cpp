#include<bits/stdc++.h>
using namespace std;
int setbits(int n)
{
    int count = 0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int x = setbits(n);
	    cout << x << endl;
	}
	return 0;
}
