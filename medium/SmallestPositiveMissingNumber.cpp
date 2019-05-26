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
        vector<int> arr;
        int max = 0;
        int min = max;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (ele >= 0)
                arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        int i;
        if (arr[0] > 1) 
            cout << 1 << endl;
        else
        {
            for(i = 0; i < arr.size(); i++)
            {
                if (arr[i+1]-arr[i] > 1)
                {
                    break;
                }
            }
            if (i != arr.size())
                cout << arr[i]+1 << endl;
            else
                cout << arr[i-1]+1 << endl;
        }
        // cout << arr[i]+1 << endl;
    }
    return 0;
}
