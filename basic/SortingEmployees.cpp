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
        map<int, vector<string>> values;
        for(int i = 0; i < n; i++)
        {
            string x; 
            int val;
            cin >> x;
            cin >> val;
            values[val].push_back(x);
        }
        for(auto itr = values.begin(); itr != values.end(); itr++)
        {
            if (itr->second.size() == 1)
                cout << itr->second[0] << " " << itr->first << " ";
            else
            {
                sort(itr->second.begin(), itr->second.end());
                for(int i = 0; i < itr->second.size(); i++)
                {
                    cout << itr->second[i] << " " << itr->first << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
