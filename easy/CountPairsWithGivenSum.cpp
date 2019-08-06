#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        map<int, int> array;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            array[arr[i]]++;
        }
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            count += array[k-arr[i]];
            if (k-arr[i] == arr[i])
                count--;
        }
        cout << count/2 << endl;
    }
	return 0;
}
