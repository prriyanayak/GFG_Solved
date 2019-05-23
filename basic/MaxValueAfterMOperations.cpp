#include<bits/stdc++.h>
using namespace std;
// vector<int> array;

int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int as[m], bs[m], values[m];
        memset(arr, 0, n*sizeof(int));
        for(int i = 0; i < m; i++)
        {
            cin >> as[i] >> bs[i] >> values[i];
            for(int j = as[i]; j <= bs[i]; j++)
            {
                arr[j] += values[i];
            }
        }
        int max = arr[0];
        for(int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        cout << max << endl;
    }
    return 0;
}
