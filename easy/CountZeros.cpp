// O(log N) complexity
#include<bits/stdc++.h>
using namespace std;

int CountZero(vector<int> arr, int lb, int ub)
{
    if (ub >= lb)
    {
        int mid = lb + (ub - lb)/2; 
        if (( mid == 0 || arr[mid-1] == 1) && arr[mid] == 0) 
            return mid; 
    
        if (arr[mid] == 1)
            return CountZero(arr, (mid + 1), ub); 
        else  
            return CountZero(arr, lb, (mid -1));
    }
    return -1;
}

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
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
	    int zero = CountZero(array, 0, n);
	    if (zero == -1)
	        cout << '0' << endl;
	    else
	    cout << (n-zero) << endl;
	}
	return 0;
}
