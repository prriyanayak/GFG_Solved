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

        for(int i = 0; i < n-1; i++)
        {
            if (arr[i] == arr[i+1] && arr[i] != 0)
            {
                arr[i] += arr[i];
                arr[i+1] = 0;
            }
        }
        // for(int i = final.size(); i < n; i++)
            // final.push_back(0);
        int countZero = 0;
        for(int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                countZero += 1;
            else
                cout << arr[i] << " "; 
        }
        for(int i = 0; i < countZero; i++)
            cout << 0 << " ";
        cout << endl;
        
    }
    return 0;
}
