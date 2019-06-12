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

        set<char> characters;
        set<char> bolts;

        for(int i = 0; i < n; i++)
        {
            char ele;
            cin >> ele;
            characters.insert(ele);
        }
        for(int i = 0; i < n; i++)
        {
            char ele;
            cin >> ele;
            bolts.insert(ele);
        }
        for(auto itr = characters.begin(); itr != characters.end(); itr++)
            cout << *itr << " ";
        cout << endl;
        for(auto itr = bolts.begin(); itr != bolts.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
	return 0;
}
