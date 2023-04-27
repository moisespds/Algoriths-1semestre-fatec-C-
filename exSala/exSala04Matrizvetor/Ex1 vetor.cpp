#include <iostream>

using namespace std;

#define QTDD 5

main(){
	int v[QTDD], i;
	for(i=0; i < QTDD; i++){
		cout << "v[" << i << "]";
		cin >> v[i];
	}
	for(i=0; i< QTDD; i++){
	if(v[i] == 64){
		cout <<"posicao: " << i << endl;
	}else{
		cout << "nao tem 64" << endl;
	}
}
return 0;
}