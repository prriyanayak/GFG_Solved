#include<bits/stdc++.h>
using namespace std;

long long int RecursiveSeq(int n)
{
    if (n == 1)
        return 1;
    else
    {
        long long int p = 1 + (n*(n-1))/2;
        long long int prod = 1;
        long long int i;
        
        for(i = 1; i <= n; i++)
        {
            // cout << prod << ":" << p << endl;
            prod = prod * p;
            p++;
        }
        // cout << "New Loop" << endl;
        return prod+RecursiveSeq(n-1);
    }
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int Answer = RecursiveSeq(n);
        cout << Answer << endl;
    }
	return 0;
}
