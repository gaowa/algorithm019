#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    if (n & 1)
        cout << "-1";
    else {
        for (int i = 30; i >= 0; i--) {
            if (n >> i & 1) {
                cout <<  (1 << i )  << " " ;
            }
        }
    }
    return 0;
}
