#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    
    while(t--)
    {
        vector<int> array;
        int n;
        cin >> n;
        int countZero = 0;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (ele != 0)
                array.push_back(ele);
            else
                countZero += 1;
        }
        for(int i = 0; i < countZero; i++)
            array.push_back(0);
        for(int i = 0; i < array.size(); i++)
            cout << array[i] << " ";
        cout << endl;
    }
    return 0;
}
