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
	    int mat[n][n];
	    vector<int> final;
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < n; j++)
	        {
	            cin >> mat[i][j];
	            final.push_back(mat[i][j]);
	        }
	    }
	    sort(final.begin(), final.end());
	    for(int i = 0; i < n*n; i++)
    	    cout << final[i] << " ";
    	cout << endl;
	}
	return 0;
}
