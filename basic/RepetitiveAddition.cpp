#include<bits/stdc++.h>
using namespace std;
int addRep(int n)
{
    if (n%9 == 0)
        return 9;
    return (n%9);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << addRep(n) << endl;
	}
}
