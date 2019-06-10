#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        sort(s.begin(), s.end());
        do
        {
            if (atoi(s.c_str())%8 == 0)
            {
                flag = 1;
                break;
            }
        } while(next_permutation(s.begin(), s.end()));
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
}
