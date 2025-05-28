#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, r, total;
    cin>>n>>r;

    if (n<r) {
        total = (r-n)+1;
        cout << total;
    } else {
      cout<< 0;
    }
    
    return 0;
}
