#include<bits/stdc++.h>
using namespace std;
vector<long int> fibo(int n)
{
    vector<long int> f;
    f.push_back(1);
    f.push_back(1);
    for(int i = 2; i <= n; i++)
    {
        long int temp = f[i-1] + f[i-2];
        f.push_back(temp);
    }
    return f;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<long int> fib = fibo(n);
	    for(int i = 0; i < fib.size()-1; i++)
	        cout << fib[i] << " ";
	    cout << endl;
	}
	return 0;
}
