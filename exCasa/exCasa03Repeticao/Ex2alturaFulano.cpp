#include <iostream>

using namespace std;

int main() {
    float alturaFulano, alturaCiclano;
    alturaFulano = 1.5;
    alturaCiclano = 1.1;
    int anos = 0;

    while (alturaCiclano <= alturaFulano) {
        alturaFulano += 0.02;
        alturaCiclano += 0.03;
        anos++;
    }

    cout << "Serao necessarios " << anos << " anos para que Ciclano seja maior que Fulano." << endl;

    return 0;
}
