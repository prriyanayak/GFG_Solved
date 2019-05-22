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
        long int digit;
        cin >> n >> digit;
        long int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            if (arr[i] == digit)
                digit = arr[i] * 2;
        }
        cout << digit << endl;
    }
	return 0;
}
