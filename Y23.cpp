#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }
    int count=0;
 
    for(int i=1;i<=n;i++){
        if(i==arr[arr[arr[i]]]){
            count+=1;
        }
    }
    if(count) std::cout<<"YES";
    else std::cout<<"NO";
}
