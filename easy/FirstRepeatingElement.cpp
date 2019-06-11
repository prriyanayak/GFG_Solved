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
	    unordered_map<int, int> hash;
	    set<int> indices;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	        hash[arr[i]] += 1;
	    }
	    int flag = -1;
	    
        for(int i = 0; i < n; i++)
        {
            if (hash.find(arr[i]) != hash.end())
            {
                if (hash[arr[i]] > 1)
                {
                    // cout << i << endl;
                    flag = i;
                    break;
                }
            }
        }
        if (flag >= 0)
            cout << flag+1 << endl;
        else
            cout << -1 << endl;
	}
}
