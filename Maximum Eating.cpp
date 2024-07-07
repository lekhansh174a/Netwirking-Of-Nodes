#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	long long int n;
	cin>>n;
	int a[n];
	for(long long int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a,a+n);
	long long int j=0;
	for(long long int i=0;i<n;i++){
	    if(a[i]>j){
	        j++;
	    }
	}
	cout<<j;
    
}
