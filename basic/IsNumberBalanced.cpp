#include<bits/stdc++.h>
using namespace std;


int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        
        int MiddleIndex = s.size()/2;
        int Middle = int(s[MiddleIndex]);
        
        int LeftSum = 0;
        int RightSum = 0;
        
        for(int i = 0; i < MiddleIndex; i++)
        {
            LeftSum += int(s[i]);
        }
        for(int i = MiddleIndex+1; i < s.size(); i++)
        {
            RightSum += int(s[i]);
        }
        
        if (LeftSum == RightSum)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        
    }
    return 0;
}
