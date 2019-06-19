#include<bits/stdc++.h>
using namespace std;

int countSetBits(int x)
{
    int count = 0;
    while(x)
    {
        x = x & (x - 1);
        count += 1;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int flag = 1;
        for(int i = 1; i < n; i++)
        {
            int setBits = countSetBits(i);
            int sum = i + setBits;
            if (sum == n)
            {
                flag = 0;
                break;
            }
        }
        cout << flag << endl;
    }
}
