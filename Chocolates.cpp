#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int a1=a[0];
    long long int b1=a[n-1];
    long long int count1=0;
    long long int count2=0;
    if(a1==b1){
        cout<<0<<" "<<n*(n-1)/2;
    }
    else{
        for(long long int i=0;i<n;i++){
            if(a[i]==a[0]){
                count1+=1;
            }
            else if(a[i]==a[n-1]){
                count2+=1;
            }
        }
        long long int x=count1*count2;
        cout<<b1-a1<<" "<<x;
    }
}
