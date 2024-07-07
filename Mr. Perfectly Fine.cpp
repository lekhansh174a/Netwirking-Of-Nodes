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
	    vector <int> a(n,1e9);
	    vector <int> b(n,1e9);
	    vector <int> x(n,1e9);
	    int f=0;
	    int g=0;
	    int w=0;
	    for(int j=0;j<n;j++){
	        int c,d;
	        cin>>c>>d;
	        if(d==1){
	            a[f]=c;
	            f++;
	        }
	        else if(d==10){
	            b[g]=c;
	            g++;
	        }
	        else if(d==11){
	            x[w]=c;
	            w++;
	        }
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    sort(x.begin(),x.end());
	    if(x[0]==1e9&&(a[0]==1e9||b[0]==1e9)){
	        cout<<-1<<"\n";
	    }
	    else{
	        int l;
	        l=min(x[0],a[0]+b[0]);
	        cout<<l<<"\n";
	    }
	}
}
