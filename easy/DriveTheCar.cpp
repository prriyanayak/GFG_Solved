#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> subtracks;
        int minPetrol = -1;
        int FinalPetrol = 0;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (k < ele)
            {
                // cout << ele << ":" << k << endl;
                minPetrol = ele - k;
                k = k + (ele - k);
                FinalPetrol = FinalPetrol + (minPetrol);
            }
        }
        if (FinalPetrol == 0)
            cout << "-1" << endl;
        else
            cout << FinalPetrol << endl;
    }
    return 0;
}
