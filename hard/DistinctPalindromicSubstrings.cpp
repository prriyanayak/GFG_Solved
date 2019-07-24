#include<bits/stdc++.h>
using namespace std;
int countPalin(string s)
{
    map<string, int> m;
    int n = s.size();
    
    int R[2][n+1];
    s = "@" + s + "#";
    for(int j = 0; j <= 1; j++)
    {
        int rp  = 0;
        R[j][0] = 0;
        int i = 1;
        while(i <= n)
        {
            while(s[i-rp-1] == s[i+j+rp])
                rp++;
            R[j][i] = rp;
            int k = 1;
            while((R[j][i-k] != rp-k) && (k < rp))
            {
                R[j][i+k] = min(R[j][i-k], rp-k);
                k++;
            }
            rp = max(rp-k, 0);
            i += k;
        }
    }
    s = s.substr(1, n);
    m[string(1, s[0])] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= 1; j++)
            for(int rp = R[j][i]; rp > 0; rp--)
                m[s.substr(i-rp-1, 2*rp+j)] = 1;
        m[string(1, s[i])] = 1;
    }
    return m.size()-1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    cout << countPalin(s) << endl;
	}
	return 0;
}
