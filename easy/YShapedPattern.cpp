#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<=n; j++){
	            if(i>n/2){
	                if(j==n/2) cout<<'*';
	                else cout<<' ';
	            }
	            else{
	                if(i==j||i+j==n) cout<<'*';
	                else cout<<' ';
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
