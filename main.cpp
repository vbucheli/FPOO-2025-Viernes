/**
* @file encripatdor.cpp
* @brief Un programa que encripta una char de acuerdo con la 
* siguiente regla dada una letra de entrada, 
* devuelve 0 si la letra está entre 'a' y 'm', 
* y 1 si la letra está entre 'n' y 'z'
*
* @details utiliza un char letra de acuerdo con la entrada devuelve 0 o 1 
* @author [Victor Bucheli]
* @mail [victor.bucheli@correounivalle.edu.co]
* @date 2025-02-28
* @version 1.0
*
* @comentario: ejercicios de incio de programación, ASSII code que permit identificar si una letra es mayuuscula o minuscula
* y tambien permite identificar si esta entre el rango de a-m o n-z
*/
#include<iostream>
#include <ctype.h>
#include <string>
using namespace std;
//Funcion que encripta recibe un char que es la letra y devuelve 0 o 1 de acuerdo
// con el rango a-m o n-z
int encpriptar(char letra){
	if(tolower(letra) >= 97 && tolower(letra)<=109) return 0;
	else if(tolower(letra) >= 110 && tolower(letra)<=122)return 1;
	else return -1;
}
//Funcion que encripta la palabra y llama a la funcion encriptar
//string funcion size. string esta conformado por chars palabra[i]
void encpriptarPalabra(string palabra){
	for (int i=0; i<palabra.size();i++){
		cout<<encpriptar(palabra[i])<<endl;
	}

}
int main(){
	encpriptarPalabra("hola");
	return 0;
}