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
        map<int, int> arr;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr[ele]++;
        }
        int element = 0;
        map<int, int>::iterator itr;
        for(itr = arr.begin(); itr != arr.end(); ++itr)
        {
            if (itr->second == 1)
            {
                element = itr->first;
                break;
            }
        }
        cout << element << endl;
    }
	return 0;
}
