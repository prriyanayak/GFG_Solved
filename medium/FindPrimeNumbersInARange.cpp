#include<bits/stdc++.h>
using namespace std;
bool prime[100001];

void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=100000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=100000; i += p) 
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
        
        for(int i = l; i <= r; i++)
        {
            if (prime[i] == true)
                cout << i << " ";
        }
        cout << endl;
    }
	return 0;
}
