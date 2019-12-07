#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	string palavra;
	
	cout <<"\nDigite uma palavra: ";
	cin >> palavra;
	cout <<"\nA palavra é " << palavra;
	
	return 0;
}
