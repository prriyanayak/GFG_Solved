#include<bits/stdc++.h>
using namespace std;
int setBits(int a)
{
    int count = 0;
    while(a)
    {
        a = a & (a-1);
        count++;
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
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                else
                {
                    sum += setBits(arr[i]^arr[j]);
                }
            }
        }
        cout << sum << endl;
	}
	return 0;
}
