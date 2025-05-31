// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int n;
set<string> paises; //almacenar todos los paises distintos que hay

int main() {
    cin>>n;

    for(int i=1; i<=n; i++){
        string s; cin>>s;

        paises.insert(s);
    }

    cout << paises.size();

    return 0;
    
}
