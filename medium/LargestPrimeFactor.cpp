#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
   if(n==1) 
   return false;
   
   for (int i=2;i<=sqrt(n); i++) {
       if(n%i==0)
       return false;
   }
   return true;
}

int largestPrime(int number)
{   
   int max_factor = 2;
   
   for (int i=2;i<=sqrt(number);i++) 
   {
        if(number%i==0) 
        {
            if(isPrime(number/i)) 
                max_factor=max(max_factor,number/i);
            else if(isPrime(i)) 
                max_factor=max(max_factor,i);
        }
   }
   
   return max_factor;
}
int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int number;
        cin >> number;
        if(isPrime(number)) 
            cout << number << endl;
        else
            cout << largestPrime(number) << endl;
    }

return 0;
}
