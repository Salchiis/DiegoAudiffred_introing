

#ifndef _Data_H
#define _Data_H
#include "string.h"
#include <fstream>
#include <iostream>

using namespace std;


class Data {
private: 

public: 
void saveData(string palabra);
};



void Data::saveData(string palabra){
    int contador=0;
    int i=0;
    ifstream archivo;
    string text;
        
    archivo.open(palabra,ios::in);


    while (!archivo.eof()) {
                getline(archivo,text);
            cout<<text<<endl;
        } 
    archivo.close();
    }
    



#endif //_Data_H