
#ifndef _methodCounter_H
#define _methodCounter_H

#include "string.h"
#include <iostream>


using namespace std;

class methodCounter {

private: 
   
public: 
int metodos(string palabra,string clase);

     

};

int methodCounter::metodos(string palabra,string clase){

     int contador=0;
    char texto[15];
    ifstream archivo;
    char icon;
    int metod=0;
    string renglon;
  
   
    string word="";
    char espacio=' ';


    archivo.open(palabra);


    while (!archivo.eof()) {

       archivo.get(icon);
        if(icon!=espacio){
        word=word+icon;
        }else{
            word="";
        }        

        if(word==clase){
            metod++;
        }
        

        }
                    
        
    archivo.close();

return metod-1;
}
#endif //_Input_H