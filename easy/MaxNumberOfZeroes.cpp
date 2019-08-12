#include<bits/stdc++.h>
using namespace std;

string max(string a, string b)
{
    long long int s  = atoll(a.c_str());
    long long int s1 = atoll(b.c_str());
    return s < s1 ? b : a;
}

long long int countZeros(string s)
{
    long long int count = 0;
    for(long long int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            count += 1;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        string ele;
        long long int max_val = 0;
        map<string, long long int> val;
        for(long long int i = 0; i < n; i++)
        {
            cin >> ele;
            long long int c = countZeros(ele);
            if (max_val < c)
                max_val = c;
            val[ele] = c;
        }
        string ans = "-1";
        
        for(auto itr = val.begin(); itr != val.end(); itr++)
        {
            if (max_val == itr->second)
                ans = max(itr->first, ans);
        }
        if (max_val == 0)  
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }
}
