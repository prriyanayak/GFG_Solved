#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 1; i <= n/2; i++)
        {
            if (n%i == 0)
                sum += i;
        }
        cout << (sum+n) << endl;
    }
    return 0;
}
