#include <bits/stdc++.h>
using namespace std;

int main(){
	int N = 3e5+5;
	int arr[N];
    for(int i=1;i<N;i++) arr[i] = arr[i-1]^(i);
    int t;
    cin>>t;
    while(t--){
    	int a,b;
    	cin>>a>>b;

		if(b != arr[a-1]){
			if((arr[a-1]^a) == b) cout<<a+2<<endl;
			else cout<<a+1<<endl;
		}else cout<<a<<endl;
	}
    return 0;
}

//arr[a-1] = x1 ^ x2 ^ x3 ^ x4 ^ ...xa-1
//0 1 2 3 4 5  MEX = 2 and XOR = 2
//0 1 3 0 4 1
// 000
// 001
// 010
// 011