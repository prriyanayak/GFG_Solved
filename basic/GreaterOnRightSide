#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        int a[n+1];
        for(int i=0;i<n;++i)   cin>>a[i];
        int b[n+1],m = -1;
        b[n] = -1;
        for(int i=n-1;i>=1;--i)
        {
            if(m < a[i])
            {
                m = a[i];
            }
            b[i] = m;
        }
        for(int i=1;i<=n;++i)
        cout<<b[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
