#include<bits/stdc++.h>
using namespace std;

int Smaller(int arr[], int x, int index, int n)
{
    int count = 0;
    for(int i = index; i < n; i++)
    {
        if (arr[i] < x)
        {
            // cout << arr[i] << " ";
            count += 1;
        }
    }
    // cout << endl;
    return count;
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
        int arr[n];
        vector<int> smaller;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
        {
            int check = Smaller(arr, arr[i], i, n);
            smaller.push_back(check);
        }
        for(int i = 0; i < smaller.size(); i++)
            cout << smaller[i] << " ";
        cout << endl; 
    }
	return 0;
}
