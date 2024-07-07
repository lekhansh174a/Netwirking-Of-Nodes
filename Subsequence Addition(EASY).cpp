#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        int count=0;
        for(int j=0;j<n;j++){
            int sum;
            if(a[0]==1&&j==0){
                sum=1;
            }
            else{
                sum=0;
                for(int k=0;k<j;k++){
                    sum+=a[k];
                }
            }
            if(sum>=a[j]){
                count+=1;
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
