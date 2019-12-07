#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>


int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	bool a = true, b = false;
	
	//Se A for verdadeiro
	if (a){
		printf ("A é verdadeiro\n");
	}
	
	//Comparando o B
	if (b){
		printf ("B é verdadeiro\n");
	}else{
		printf ("B é falso\n");
	}
	
	//Comparando uma falsidade
	if (!b){
		printf ("B é falso\n");
	}
}
