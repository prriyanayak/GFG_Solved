#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n], arr2[m];
        unordered_set<int> hash;
        map<int, int> final;
        for(int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            hash.insert(arr1[i]);
        }
        int count = -1;
        for(int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            int diff = k - arr2[i];
            if (hash.find(diff) != hash.end())
            {
                final[diff] = arr2[i];   
                count = 0;
            }
        }
        if (count == -1)
            cout << -1 << endl;
        else
        {
            int size = final.size();
            int finalCount = 0;
            for(auto itr = final.begin(); itr != final.end(); itr++)
            {
                finalCount += 1;
                if (finalCount < size)
                    cout << itr->first << " " << itr->second << ", "; 
                else
                    cout << itr->first << " " << itr->second;
            }
            cout << endl;
        }
    }
}
