// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main() {
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n-2; i++){
        if(a[i]>= 50 and a[i+1]>=50 and a[i+2]>=50){
            cout << a [i] +a[i+1]+a[i+2];
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
	

    
}
