#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    map<char, int> m, n;
	    string str;
	    cin>>str;
	    for(int i=0; i<str.length(); ++i)
	        m[str[i]]++;
	        
	    for(int i=0; i<str.length(); ++i){
	        if(m[str[i]]==1){
	            cout<<str[i];
	        }
	        else if(m[str[i]]>1){
	            if (n[str[i]]<1){cout<<str[i];n[str[i]]++;}
	        }
	        else{
	            continue;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
