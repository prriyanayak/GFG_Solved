#include<bits/stdc++.h>
using namespace std;
bool prime[10000];

void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=10000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=10000; i += p) 
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
        for(int i = 0; i < 10000; i++)
        {
            if (prime[i] == true)
                primes.push_back(i);
        }
        map<int, int> final;
        
        for(int i = 0; i < primes.size(); i++)
        {
            
            while(n%primes[i] == 0)
            {
                final[primes[i]] += 1;
                n = n / primes[i];
            }
        }
        for(auto itr = final.begin(); itr != final.end(); itr++)
            cout << itr->first << " " << itr->second << " ";
        cout << endl;
    }
    return 0;
}
