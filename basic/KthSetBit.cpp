#include<bits/stdc++.h>
using namespace std;

int checkSet(int n, int k)
{
    int pos = 0;
    while(n > 0)
    {
        if (n%2 == 0 && pos == k)   
            return 1;
        pos += 1;
        n = n/2;
    }
    return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    if (!checkSet(n, k))
	        cout << "Yes" << endl;
        else
            cout << "No" << endl;
	}
	return 0;
}
