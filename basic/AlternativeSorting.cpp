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
        vector<int> array;
        for(int i = 0; i < n; i++)
        {
            // cin >> array[i];
            int ele;
            cin >> ele;
            array.push_back(ele);
        }
        sort(array.begin(), array.end());
        int k = 0;
        for(int i = 0; i < n-1; i++)
        {
            if (i%2 == 0)
            {
                cout << array[n-1-k] << " " << array[k] << " ";
                k++;
            }
        }
        if (n%2 != 0)
            cout << array[n-1-k] << " ";
        cout << endl;
    }
    return 0;
}
