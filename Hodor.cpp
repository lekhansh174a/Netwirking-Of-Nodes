#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int v[n];
        int c0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0)
                c0 += 1;
        }
        int zop = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i] == v[j] && i!=j) {
                    zop += 1;
                    break;
                }
            }
        }
        int c2 = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0)
                c2 += 1;
        }
 
        if (c0>0) {
            cout << n - c0 << "\n";
        } else if (zop == 0 && c0 == 0) {
            cout << n + 1 << "\n";
        } else if (c0 == 0 && zop >= 1) {
            cout << n << "\n";
        }
        else{
            cout<<n<<"\n";
        }
 
    }
    return 0;
}
