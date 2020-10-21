#ifndef _Input_H
#define _Input_H

#include <fstream>
#include "string.h"
#include <iostream>
using namespace std;

class Input {

private: 
   
public: 
  int readData(string clase);
};

int Input::readData(string clase){
    string valorStr;
    ifstream archivo(clase);
    double valor;
    int columna=1;
    cout<<"Valor de X"<<" "<<"\tValor de Y"<<endl;
        while (archivo >> valorStr) {
            valor = stod(valorStr);
            if(columna%2!=0){
            cout<<valor;
            }else{
            cout<<"\t\t"<<valor<<endl;
            }
        columna++;
    }
    return columna-1;
}
#endif //_Input_H