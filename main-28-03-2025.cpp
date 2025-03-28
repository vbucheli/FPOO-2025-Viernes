/*
  Archivo: Main.cpp
  Autor: Curso FPOO 2023-1
  Correo: victor.bucheli@correounivalle.edu.co
  Fecha creación: 2023-04-12
  Licencia: GNU-GPL
*/

/**
  CLASE: Main
  INTENCIÓN: utilizar las referencias, los punteros y el paso de mensajes.
  RELACIONES: Se relaciona con la clase banco.

*/

#include "Banco.h"
#include "Cuenta.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

int main() {
  // Intaciar Objetos
  Banco bancoUnivalle("Banco Univalle");
  Cuenta miCuenta2("1307082", 200000);
  Usuario miPrimerUsuario("2886122", "Pepe Palos", "30029382");
  Usuario miSegundoUsuario("2886123", "Paco Palos", "3002222");
 
  //  Ambito en el que viven las variables {}
  for (int i = 0; i < 3; i++) {
    cout << i << endl;
  }
  cout<<i<<endl;
  i++;
 
  // Ambito en el que viven los objetos
  // Bajo el supuesto que estamos en la opción 3 de un menu
  int opcion = 3;
  double saldo=0;

  if (opcion == 3) {
    Cuenta miCuenta("130708", 100000);
    miCuenta.retirarDinero(20000);

    saldo=miCuenta.getSaldo();

    cout << miCuenta.getSaldo() << endl;
  }
  Cuenta miCuenta("130708", saldo);
  miCuenta.retirarDinero(20000);
  cout<<miCuenta.getSaldo()<<endl;
  
  miCuenta.retirarDinero(miCuenta.getSaldo());

 
  miCuenta.recibeValor(usuario.getDineroCash());

}