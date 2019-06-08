#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        int hash[1000] = {0};
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hash[arr[i]] += 1;
        }
        int sum = 0;
        for(int i = 0; i < 1000; i++)
        {
            if (hash[i]%2 == 0 && hash[i] > 0)
            {
                sum += hash[i];
            }
            else if (hash[i] > 0 && hash[i]%2 == 1)
            {
                sum += hash[i]-1;
            }
        }
        cout << sum << endl;
    }
}
