#include <iostream>

using namespace std;
  main(){
    int i, j, calc;
    int matriz[3][6], vetor[6];
    for(i=0; i<3; i++){
        for(j=0; j<+6; j++){
            cout << "Digite um valor: " << endl;
            cin >> matriz[i][j];
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<6; j++){
            cout << matriz[i][j]<< " ";
        }
        cout << endl;
    }
        for(j=0; j<6; j++){
            calc = 0;
        for(i=0; i<3; i++){
            calc += matriz[i][j];
        }
        vetor[j] = calc;
        cout << endl;
    }
        for(j=0; j<6; j++){
            cout << vetor[j] << " ";
        }
	return 0;
}
