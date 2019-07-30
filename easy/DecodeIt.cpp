#include<bits/stdc++.h>
using namespace std;
int isNum(char a)
{
    int x = (int)a;
    if (x >= 48 && x <= 57)
        return 1;
    return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string ip;
	    cin >> ip;
	    int k;
	    cin >> k;
	    int i = 0;
	    string s = "";
	    while(i<ip.size())
	    {
	        if(!isNum(ip[i]))
	        {
	            s.push_back(ip[i]);
	        }
	        else{
	            int num = ip[i]-'0';
	            string temp= s;
	            while(num>1)
	            {
	                s+=temp;
	                num--;
	            }
	        }
	        i++;
	    }
	    cout << s[k-1] << endl;
	}
	return 0;
}
