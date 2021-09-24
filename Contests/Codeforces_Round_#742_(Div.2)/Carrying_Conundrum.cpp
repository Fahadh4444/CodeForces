#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int i = 0;
		int a=0,b=0;
		int c1=1,c2=1;
		while(n){
			if(i == 0){
				a += (n%10)*c1;
				c1 *= 10;
			}else{
				b += (n%10)*c2;
				c2 *= 10;
			}
			n /= 10;
			if(i==0) i=1;
			else i=0;
		}
		cout<<((a+1)*(b+1))-2<<endl;
	}
    return 0;
}



//  2 0 3 9
//  2 9 7 6
//Alice Addition giives
// |
// v
//1 5 0 0 5

//here even places sum and odd places sums gives 100 and 50
//finding number of pairs of 100 forms is 101 and for 50 gives 51
//multiplying 101*50 and removing two cases of (n,0) and (0,n) gives ansers