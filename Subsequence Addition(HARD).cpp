#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        long long int count=0;
        long long int sum=0;
        for(long long int j=0;j<n;j++){
            if(a[0]==1&&j==0){
                sum+=1;
                count+=1;
            }
            else{
                if(sum>=a[j]){
                  count+=1;
                  sum+=a[j];
                }
            }
        }
        if(count==n){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
