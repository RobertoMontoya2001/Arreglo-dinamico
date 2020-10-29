#include <iostream>
#include "arreglo.h"

int main() {
  ArregloDinamico arreglo;
  
  arreglo.insertar_final("Computacion");
  arreglo.insertar_final("Arreglo");
  arreglo.insertar_final("Dinamico");
  arreglo.insertar_final("Cucei");
  arreglo.insertar_final("Estructura");
  arreglo.insertar_final("De");
  arreglo.insertar_final("Datos");
  arreglo.insertar_final("Roberto");
  
  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " ";
  }

  cout << endl;
  arreglo.insertar_inicio("Mundo");
  arreglo.insertar_inicio("Hola");

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " ";
  }
}