#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        // vector<int> array;
        long long int n;
        cin >> n;
        long long int array[n];
        for(long long int i = 0; i < n; i++)
            cin >> array[i];
        sort(array, array+n);
        if (array[0] < 0 && array[1] < 0)
        {
            long long int mul;
            mul = max(array[0] * array[1] * array[n-1], array[n-1] * array[n-2] * array[n-3]);
            cout << mul << endl;
        }
        else
            cout << (array[n-1]*array[n-2]*array[n-3]) << endl;
    }
        return 0;
}
