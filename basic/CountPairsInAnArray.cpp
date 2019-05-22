#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if (i*arr[i] > j*arr[j])
                    count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
