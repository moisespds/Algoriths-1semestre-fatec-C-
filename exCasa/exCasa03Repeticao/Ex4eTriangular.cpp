#include <iostream>

using namespace std;

int main() {
    int n, i;
    bool eTriangular;
    eTriangular = false;
    cout << "Digite um numero natural: ";
    cin >> n;
    for (i = 1; i * (i + 1) * (i + 2) <= n; i++) {
        if (i * (i + 1) * (i + 2) == n) {
            eTriangular = true;
            break;
        }
    }

    if (eTriangular) {
        cout << n << " eh um numero triangular." << endl;
    } else {
        cout << n << " nao eh um numero triangular." << endl;
    }

    return 0;
}
