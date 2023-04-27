#include <iostream>

using namespace std;

int main(){
    int mediaFinal, notaProva, notaTrabalho, notaExercicios;
    cout << "Digite a nota da Prova: ";
    cin >> notaProva;
    cout << "Digite a nota do trabalho: ";
    cin >> notaTrabalho;
    cout << "Digite a nota do Exercicios: ";
    cin >> notaExercicios;
    mediaFinal = ((notaProva * 7) + (notaTrabalho * 2) + (notaExercicios * 1)) / 10;
    cout << "Sua nota final e = " << mediaFinal << endl;
    return 0;
}
