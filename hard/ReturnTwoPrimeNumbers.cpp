#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        if (n%i == 0)
            count += 1;
    }
    if (count == 1)
        return 1;
    return 0;
}

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int n1, n2;
	    for(int i = 1; i < n; i++)
	    {
	        if (isPrime(i) == 1)
	        {
	            if (isPrime(n-i) == 1)
	            {
	                n1 = i;
	                n2 = n-i;
	                break;
	            }
	        }
	    }
	    cout << n1 <<" " << n2 << endl;
	}
	return 0;
}
