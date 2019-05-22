#include<bits/stdc++.h>
using namespace std;

vector<long int> convertToBinary(long int n)
{
    vector<long int> output;
    while(n > 0)
    {
        int r = n%2;
        output.push_back(r);
        n = n/2;
    }
    return output;
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n;
	    cin >> n;
	    vector<long int> binaryRep;
	    binaryRep = convertToBinary(n);
	    int flag = 0;
	   // for(int i = 0; i < binaryRep.size(); i++)
	   // {
	   //     cout << binaryRep[i];
	   // }
	   // cout << endl;
	    for(int i = 0; i < binaryRep.size()-1; i++)
	    {
	        if (binaryRep[i] == binaryRep[i+1])
	            flag += 1;
	    }
	    if (flag == 0)
	        cout << 1 << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}
