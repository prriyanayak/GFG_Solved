#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int LCS(string X, string Y, int m, int n)
{
    int lcs[n+1][m+1];
    int i, j;
    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                lcs[i][j] = 1 + lcs[i-1][j-1];
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }
    return lcs[n][m];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    string X;
	    string Y;
	    cin >> X;
	    cin >> Y;
	    cout << LCS(X, Y, m, n) << endl;
	}
	return 0;
}
