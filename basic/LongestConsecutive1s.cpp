#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n << 1);
        count += 1;
    }
    return count;
}

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    int consecutive = check(x);
	    cout << consecutive << endl;
	}
	return 0;
}
