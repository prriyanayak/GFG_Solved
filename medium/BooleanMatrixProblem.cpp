#include<bits/stdc++.h>
using namespace std;
#define R 1000
#define C 1000

void modifyMatrix(int mat[][C], int n, int m)
{
    bool row = false;
    bool col = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (i == 0 && mat[i][j] == 1)
                row = true;
            if (j == 0 && mat[i][j] == 1)
                col = true;
            if (mat[i][j] == 1)
            {
                mat[0][j] = 1;
                mat[i][0] = 1;
            }
        }
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if (mat[0][j] == 1 || mat[i][0] == 1)
            {
                mat[i][j] = 1;
            }
        }
    }
    if (row == true)
    {
        for(int i = 0; i < m; i++)
            mat[0][i] = 1;
    }
    if (col == true)
    {
        for(int i = 0; i < n; i++)
            mat[i][0] = 1;
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    int mat[R][C];
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < m; j++)
	            cin >> mat[i][j];
	    }
	    modifyMatrix(mat, n, m);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
	}
	return 0;
}
