#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];

void colour(int h, int m, int n, int x, int y, int k)
{
    if (x >= m || y >= n || x < 0 || y < 0 || matrix[x][y] != h)
        return;
    matrix[x][y] = k;
    static int row[] = {0, 0, 1, -1};
    static int column[] = {-1, 1, 0, 0};
    
    for(int i = 0; i < 4; i++)
    {
        colour(h, m, n, x + row[i], y + column[i], k);
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    for(int i = 0; i < m; i++)
	    {
	        for(int j = 0; j < n; j++)
    	        cin >> matrix[i][j];
	    }
	    int x, y, k;
	    cin >> x >> y >> k;
	    
	    int h = matrix[x][y]; // for future 
	    colour (h, m, n, x, y, k);
	    
	    for(int i = 0; i < m; i++)   
	    {
	        for(int j = 0; j < n; j++)
	            cout << matrix[i][j] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
