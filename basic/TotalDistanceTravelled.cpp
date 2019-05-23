#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        map<long int, long int> numberIndex;
        int n;
        cin >> n;
    
        for(int i = 0; i < n; i++)
        {
            long int ele;
            cin >> ele;
            numberIndex.insert(pair<long int, long int>(ele, i));
        }
        map<long int, long int>::iterator itr; 
        vector<long int> indices;
        long int diff = 0;
        for(itr = numberIndex.begin(); itr != numberIndex.end(); ++itr)
        {
            indices.push_back(itr->second);
            // cout << itr->second << " ";
        }
        // cout << endl;
        for(long int i = 1; i < indices.size(); i++)
        {
            // cout << indices[i-1] << ":" << indices[i];
            diff += abs(indices[i-1] - indices[i]);
            // cout << ":::" << diff << endl;
        }
        cout << diff << endl;
    }
    return 0;
}
