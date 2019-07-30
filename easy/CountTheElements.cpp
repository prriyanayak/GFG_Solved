#include<bits/stdc++.h>
using namespace std;
int getEle(int a1[], int l, int h, int ele)
{
    int mid;
    while(l <= h)
    {
        mid = (l + h) / 2;
        if (a1[mid] <= ele)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n], b[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++)
	        cin >> b[i];
	    int q;
	    cin >> q;
	    int ele;
	    int queries[q];
	    sort(b, b + n);
	    for(int i = 0; i < q; i++)
    	{
    	    cin >> ele;
    	    queries[i] = getEle(b, 0, n-1, a[ele]);
    	}
    	for(int i = 0; i < q; i++)
    	    cout << queries[i]+1 << endl;
	}
	return 0;
}#include<bits/stdc++.h>
using namespace std;
int getEle(int a1[], int l, int h, int ele)
{
    int mid;
    while(l <= h)
    {
        mid = (l + h) / 2;
        if (a1[mid] <= ele)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n], b[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++)
	        cin >> b[i];
	    int q;
	    cin >> q;
	    int ele;
	    int queries[q];
	    sort(b, b + n);
	    for(int i = 0; i < q; i++)
    	{
    	    cin >> ele;
    	    queries[i] = getEle(b, 0, n-1, a[ele]);
    	}
    	for(int i = 0; i < q; i++)
    	    cout << queries[i]+1 << endl;
	}
	return 0;
}
