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
        int ele;
        set<int> elements;
        for(int i = 0; i < n; i++)
        {
            cin >> ele;
            elements.insert(ele);
        }
        for(int i = 0; i < n; i++)
        {
            if (elements.find(i) != elements.end())
                cout << i << " ";
            else
                cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}
