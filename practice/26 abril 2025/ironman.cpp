// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int a[1005];
int n, inicial;

int main() {
    cin>>n>>inicial;
    for(int i=1; i<=n; i++){
        cin>>a[i];

        inicial+=a[i];
        
        if(inicial<0){
            cout<<i;
            return 0;
        }
    }a
    
    cout << inicial;
    return 0;
	

    
}
