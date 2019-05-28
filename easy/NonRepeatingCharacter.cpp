#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        for(int i = 0; i < n; i++)
        {
            arr[s[i]-'a']++;
        }
        int flag = -1;
        for(int i = 0; i < n; i++)
        {
            if (arr[s[i]-'a'] == 1)
            {
                flag = i;
                break;
            }
        }
        if (flag >= 0)
            cout << s[flag] << endl;
        else
            cout << -1 << endl;
    }
	return 0;
}
