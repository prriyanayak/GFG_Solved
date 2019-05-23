#include<bits/stdc++.h>
using namespace std;

int isPerfect(int a)
{
    int n = sqrt(a);
    if (n*n == a)
        return 1;
    return 0;
}
int isFibo(int ele)
{
    int a = 5*ele*ele - 4;
    int b = 5*ele*ele + 4;
    if (isPerfect(a) || isPerfect(b))
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            int check = isFibo(ele);
            if (check == 1)
                count += 1;
        }
        cout << count << endl;
    }
    
    return 0;
}
