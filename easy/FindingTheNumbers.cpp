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
        int actual = (2*n)+2;
        int arr[actual];
        map<int, int> numbers;
        for(int i = 0; i < actual; i++)
        {
            cin >> arr[i];
            numbers[arr[i]]++;
        }
        map<int, int>::iterator itr;
        for(itr = numbers.begin(); itr != numbers.end(); ++itr)
        {
            if (itr->second == 1 || (itr->second%2 != 0))
                cout << itr->first << " ";
        }
        cout << endl;
    }
    return 0;
}
