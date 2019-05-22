#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	int t;
	cin >> t;
	cin.ignore(); 
	while(t--)
	{
	    
	    string s;
	    getline(cin, s);
	   // cout << s << endl;
	    stringstream str(s);
	    string word;
	    int length = 0;
	    while(str >> word)
	    {
	       // cout << word.size() << ":" << word << endl;
	        if (word.size() > length)
	            length = word.size();
	    }
	    cout << length << endl;
	    
	}
	return 0;
}
