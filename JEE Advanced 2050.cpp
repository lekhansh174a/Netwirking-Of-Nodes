#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int a;
        cin>>a;
        if(a%2050!=0){
            cout<<-1<<"\n";
        }
        else{
            long long int x;
            int ans=0;
            int sum=0;
            for(long long int j=2050;;j=j*10){
                if(a/j>=1){
                    x=j;
                }
                else{
                    break;
                }
            }
            long long int b=a;
            
                
            for(x=x;x>=2050;x=x/10){
                if(sum==b){
                    break;
                }
                sum+=x*(a/x);
                ans+=(a/x);
                a=a-x*(a/x);
            }
            cout<<ans<<"\n";
            
        }
    }
}
