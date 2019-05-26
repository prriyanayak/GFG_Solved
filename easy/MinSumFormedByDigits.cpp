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
        vector<int> arr;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        string firstNum, secondNum;
        for(int i = 0; i < n; i++)
        {
            if (i%2 == 0)
                firstNum += (arr[i]+'0');
            else
                secondNum += (arr[i]+'0');
        }
        cout << (atoi(firstNum.c_str())+atoi(secondNum.c_str())) << endl;
    }
    return 0;
}
