#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	string result;
    	for(int i=0;i<n;i++){
    		if(s[i] == 'L' || s[i] == 'R') result += s[i];
			else if(s[i] == 'U') result += 'D';
			else if(s[i] == 'D') result += 'U';
		}
		cout<<result<<endl;
    	
	}
    return 0;
}