#include <iostream>
#define TERMOS 20
using namespace std;

int main() {
    int i, s, x;
    s = 0;
    x = 1;

    for (int i = 1; i <= TERMOS; i++) {
        s += x / i;
        x *= i;
    }

    cout << "O valor de S eh: " << s << endl;

    return 0;
}
