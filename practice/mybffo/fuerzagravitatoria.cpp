/*
Entrada:
3
100 2
200 4
50 1

Salida:
87.50

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double fuerzaTotal = 0.0;

    for (int i = 0; i < n; ++i) {
        int m, d;
        cin >> m >> d;
        fuerzaTotal += m / (double)(d * d);
    }

    cout << fuerzaTotal << endl;
    return 0;
}
