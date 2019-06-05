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
        int sum = 0;
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            sum += ele;
        }
        int k;
        cin >> k;
        
        if (n%2 != 0)
            flag = 1;
            
        else
        {
            
            if (sum%k == 0)
                flag = 2;
        }
        if (flag == 0 || flag == 1)
            cout << "False" << endl;
        else
            cout << "True" << endl;
    }
    return 0;
}
