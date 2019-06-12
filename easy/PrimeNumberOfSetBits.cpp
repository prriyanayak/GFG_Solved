#include<bits/stdc++.h>
using namespace std;
int countOnes(int n)
{
    int count = 0;
    while(n > 0)
    {
        int r = n % 2;
        if (r == 1)
            count += 1;
        n = n / 2;
    }
    return count;
}

int isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int l, r;
	    cin >> l >> r;
	    int count = 0;
	    for(int i = l; i <= r; i++)
	    {
	        int ones = countOnes(i);
	        if (ones == 0 || ones == 1)
	            continue;
	        else if (isPrime(ones) == 1)
	            count += 1;
	    }
	    cout << count << endl;
	}
	return 0;
}
