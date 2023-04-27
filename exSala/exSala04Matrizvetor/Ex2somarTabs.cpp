#include <iostream>

using namespace std;

#define colum 2
#define line 2

main(){
	int a[colum][line], b[colum][line], c[colum][line], i, l;
	for(i=0; i < colum; i++){
		for(l=0; l<line; l++){	
		cout << "a[" << i << "]" << "[" << l << "]";
		cin >> a[i][l];
		}
	}
	for(i=0; i < colum; i++){
		for(l=0; l<line; l++){
		cout << "b[" << i << "]" << "[" << l << "]";
		cin >> b[i][l];
		}
	}
	for(i=0; i < colum; i++){
		for(l=0; l< line; l++){
		c[i][l] = a[i][l] + b[i][l];
		cout << "a[" << i << "]" << "[" << l << "]" << "+";
		cout << "b[" << i << "]" << "[" << l << "]" << "=";
		cout << "c[" << i << "]" << "[" << l << "]" << endl ;
	}
	}
	
return 0;
}