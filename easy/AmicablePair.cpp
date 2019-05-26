#include<bits/stdc++.h>
using namespace std;
int SumProper(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if (n%i == 0)
            sum += i;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if (SumProper(n1) == n2 && SumProper(n2) == n1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
