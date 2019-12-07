#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int matriz[2][2], i, j;
	
	//Passando valores
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;
	
	//Imprimindo valores na tela
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Digite um valor: ";
			cin >> matriz[i][j];
		}
	}
	
	cout <<"Os valores da matriz são:" << endl;
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
}
