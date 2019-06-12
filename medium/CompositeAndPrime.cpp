#include<bits/stdc++.h>
using namespace std;
bool prime[10000001];

void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=10000000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=10000000; i += p) 
                prime[i] = false; 
        } 
    } 
} 


int main()
{
    SieveOfEratosthenes();
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        
        int composite = 0;
        int primes = 0;
    
        for(int i = l; i <= r; i++)
        {
            if (i == 1)
                continue;
            else if (prime[i] == true)
                primes += 1;
            else
                composite += 1;
        }
        cout << (composite - primes) << endl;
    }
	return 0;
}
