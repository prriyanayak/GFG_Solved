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
        // int arr[n];
        vector<int> arr;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {    
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        sum = arr[0];
        for (int i = 1; i < n; i++) 
        { 
            if (arr[i] == arr[i - 1])
            {             
                int j = i; 
                while (j < n && arr[j] <= arr[j - 1]) 
                {           
                    arr[j] = arr[j] + 1; 
                    j++; 
                } 
            } 
            sum += arr[i]; 
        } 
        cout << sum << endl;
    }
    return 0;
}
