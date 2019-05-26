#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        string n1, n2;
        cin >> n1 >> n2;
        if (n1.size() == 1 && n2.size() == 1)
            cout << n2 << " " << n1 << endl;
        else
        {
            char temp = n1[0];
            n1[0] = n2[n2.size()-1];
            n2[n2.size()-1] = temp;
            // cout << n1 << " " << n2 << endl;
            temp = n2[0];
            n2[0] = n1[n1.size()-1];
            n1[n1.size()-1] = temp;
            cout << n1 << " " << n2 << endl;
        }
    }
    return 0;
}
