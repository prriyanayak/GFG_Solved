#include<bits/stdc++.h>
using namespace std;

int setBits(int a)
{
    int count = 0;
    while(a)
    {
        a = a & (a-1);
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
        int x;
        cin >> x;
        int sum = 0;
        for(int i = 0; i <= x; i++)
        {
            sum += setBits(i);
        }
        cout << sum << endl;
    }
	return 0;
}
