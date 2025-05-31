// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

map<char,int> m;

string s;

int main() {
    //cantidad de apariciones mapear letras

    cin>>s;

    for(char c:s){
        m[c]++; //aumentando en 1 las repeticiones del caracter
    }

    //keys: letras del alfabeto
    //values: las repeticiones de cada uno

    int impresa =0;
    for(auto p:m){
        //par ordenado; <key,value>
        char c = p.first;
        int cantidad = p.second;

        if(cantidad%2==1){
            cout<<c;
            impresa++;
        }
    }

    if(impresa==0){
        cout<<"-\n";
    }
    
    return 0;
    
}
