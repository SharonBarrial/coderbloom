#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, e, p;
    cin >> t >> e >> p;

    if (t >= 0 && t <= 10 && e >= 0 && e <= 10 && p >= 0 && p <= 10) {
        int total = t + e + p;
        cout << total;
    } else {
        cout << "Fuera de rango";
    }

    return 0;
}
