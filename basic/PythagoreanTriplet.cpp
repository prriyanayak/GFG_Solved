#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a < b ? b : a;
}

bool isPresent(int arr[], int n)
{
    int max_val = 0;
    for(int i = 0; i < n; i++)    
        max_val = max(max_val, arr[i]);
    int hash[max_val + 1] = {0};
    for(int i = 0; i < n; i++)
        hash[arr[i]]++;
    for(int i = 0; i < max_val + 1; i++)
    {
        if (hash[i] == 0)
            continue;
        for(int j = 1; j < max_val + 1; j++)
        {
            if ((i == j && hash[i] == 1) || hash[j] == 0)
                continue;
            int val = sqrt(i*i + j*j);
            if (val*val != (i*i + j*j))
                continue;
            if (val > max_val)
                continue;
            if (hash[val])
                return true;
        }
    }
    return false;
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
        if (isPresent(arr, n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
	return 0;
}
