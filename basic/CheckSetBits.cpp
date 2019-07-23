#include<bits/stdc++.h>
using namespace std;
int setBits(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n-1);
        count += 1;
    }
    return count;
}

int length(int n)
{
    int count = 0;
    while(n > 0)
    {
        count += 1;
        n = n / 2;
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
	    if (length(n) == setBits(n))
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
