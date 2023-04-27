  #include <iostream>

using namespace std;

  main(){
	float numb;
	cout << "Digite um numero: ";
	cin >> numb;
	if(numb > 0){
	    cout << "Esse numero e maior que zero" << endl;
		
	}else if(numb < 0){	
		cout << "Esse numero e menor que zero" << endl;
	}else{
		cout << "Esse numero e igual a zero" << endl;
	}
}