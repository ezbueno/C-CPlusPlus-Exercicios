#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int l, c, cont;
	string time[4];
	
	cout << "======================" << endl;
	cout << "| Torneio de Futebol |" << endl;
	cout << "======================" << endl;
	
	for (cont = 1; cont < 4; cont++){
		cout << "Digite o nome do " << cont << " º time : ";
		cin >> (time[cont]);
	}
	
	system("cls");
	
	
	cout << "=====================" << endl;
	cout << "| Tabela do Torneio |" << endl;
	cout << "=====================" << endl;
	
	for (l = 1; l < 4; l++){
		for (c = 1; c < 4; c++){
			if (l != c){
				cout << time[l] << " [  ] " << " X " << " [  ] " << time[c] << endl;
			}
		}
	}
	
}
