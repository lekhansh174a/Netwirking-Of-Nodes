#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int k=0;k<n;k++){
            int j=k;
            int day=0;
            while(1){
                if(a[j]==k+1){
                    
                    cout<<day+1<<" ";
                    break;
                }
                else{
                    day++;
                    j=a[j]-1;
                }
            }
        }
        cout<<"\n";
    }
    
}
