
#ifndef _Input_H
#define _Input_H

#include "string.h"
#include <iostream>
#include "Output.h"
#include "Media.h"

using namespace std;

class Input {

private: 
   
public: 
   double* readData(string palabra,int tam, double lista[]);
     

};



double* Input::readData(string palabra,int tam, double lista[]){

   
    string valorStr;
    int i=0;
    ifstream archivo(palabra);
    string valor;
     while (archivo >> valorStr) {
        valor = stod(valorStr);

        if (valor != 0) { // Para darnos cuenta cuando encontramos el final de la lista
            lista[i]=valor;
        }
        i++;
    }
    return lista;


    /*
       int contador=0;
    int i=0;
    char texto[80];
    ifstream archivo;

        
    archivo.open(palabra);


    if (!archivo.fail()){
                    archivo.getline(texto, 80, ' ');
                                cout<<texto<<endl;

    while (!archivo.eof()) {
                archivo.getline(texto, 80, ' ');
                        cout<<texto<<endl;

        } 
    archivo.close();
    }

    */
} 
#endif //_Input_H