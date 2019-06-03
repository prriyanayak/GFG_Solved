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
	    map<int, int> first;
	    map<int, int> last;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	        last[arr[i]] = i;
	        if (first.count(arr[i]) > 0)
	            continue;
	        else if (first.count(arr[i]) == 0)
	            first[arr[i]] = i;
	    }
	    
	    map<int, int>::iterator itr1;
	    map<int, int>::iterator itr2;
	   
	    int max_diff = 0;
	    for(itr1 = last.begin(), itr2 = first.begin(); itr1 != last.end(), itr2 != first.end(); ++itr1, ++itr2)
	    {
	        int diff = itr1->second - itr2->second;
	        if (max_diff < diff)
	            max_diff = diff;
	    }
	    cout << max_diff << endl;
	}
    return 0;   
}
