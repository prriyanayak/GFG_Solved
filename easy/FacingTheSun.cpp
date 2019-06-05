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
        int max = 0;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (max < ele)
            {
                max = ele;
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
