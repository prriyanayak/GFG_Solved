#include<bits/stdc++.h>
using namespace std;
bool prime[100];

void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=100; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=100; i += p) 
                prime[i] = false; 
        } 
    } 
} 

int main()
{
    //code
    SieveOfEratosthenes();
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> primes;
        int n;
        cin >> n;
        for(int i = 0; i < 100; i++)
        {
            if (prime[i] == true)
                primes.push_back(i);
        }
        long long int sum = 1;
        for(int i = 0; i < primes.size(); i++)
        {
            long long int p = primes[i];
            long long int ex = 0;
            while(p <= n)
            {
                ex = ex + (n/p);
                p = p * primes[i];
            }
            sum *= (ex + 1);
        }
        cout << sum << endl;
    }
    return 0;
}
