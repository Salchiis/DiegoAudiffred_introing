#ifndef _DATA_H
#define _DATA_H
#include "string.h"
#include <fstream>
#include <iostream>

using namespace std;


class Data {
private: 

public: 
double* saveData(string clase,double datos[]);
};



double* Data::saveData(string clase, double datos[]){
        
    string valorStr;
    ifstream archivo(clase);
    double valor;
    int i=0;
    while (archivo >> valorStr){
        valor = stod(valorStr);
        if (valor!=0){
        datos[i]=valor;
        i++;
        }   
    }
    return datos;
}
#endif //_Data_H

