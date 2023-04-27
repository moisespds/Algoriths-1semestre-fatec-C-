#include <iostream>

using namespace std;

int main() {
    int soma, i;
    soma = 0;

    for (int i = 1; i <= 500; i++) {
        if (i % 2 == 1) {
            soma += i;
        }
    }

    cout << "A soma dos numeros impares de 1 a 500 eh: " << soma << endl;

    return 0;
}
