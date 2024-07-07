#include <iostream>
using namespace std;
 
int main() {
	long long int n;
	cin>>n;
	if(n%2!=0){
	    cout<<0<<"\n";
	}
	else{
	    long long int x=1;
	    long long int y= n/2;
	    for(long long int i=0;i<y;i++){
	        x=x*2;
	    }
	    cout<<x<<"\n";
	}
    
}
