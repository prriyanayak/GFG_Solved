#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int maxOnes = 0;
        int index = -1;
        for(int i = 0; i < n; i++)
        {
            int count_one = 0;
            for(int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                    count_one += 1;
            }
            if (count_one > maxOnes)
            {
                maxOnes = count_one;
                index = i;
            }
        }
        cout << index << endl;
    }
    return 0;
}
