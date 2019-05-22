#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    vector<int> array;
	    for(int i = 0; i < n; i++)
	    {
	        int ele;
	        cin >> ele;
	        array.push_back(ele);
	    }
	    int count = 0;
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = i+1; j < n; j++)
	        {
	            if (i!=j && array[i]+array[j] < array[i]*array[j])   
	                count += 1;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
