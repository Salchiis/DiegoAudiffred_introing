
#ifndef _OUTPUT_H
#define _OUTPUT_H

#include <string>
#include <iostream>

using namespace std;

class Output{
public: 
    
void writeData(string palabra, string clase, int metodos, int lineas);
private: 
    
};

void Output::writeData(string palabra, string clase, int metodos, int lineas){
    cout<<"El archivo leido es: "<<palabra<<endl;
    cout<<"El numero de lineas de codigo son "<<lineas<<endl;
    cout<<"El numero de metodos son: "<<metodos<<endl;
   
   
}




#endif //_LOGIC_H