
#ifndef _LineCounter_H
#define _LineCounter_H

#include "string.h"
#include <iostream>


using namespace std;

class LineCounter {

private: 
   
public: 
int lineas(string palabra,char palabra1[]);

     

};

int LineCounter::lineas(string palabra,char palabra1[]){

     int contador=0;
    ifstream archivo;
    char icon;
    int chars=0;
    char espacio=' ';
    


    archivo.open(palabra);

    string word="";



    while (!archivo.eof()) {
                
      
       archivo.get(icon);
        if(icon!=espacio){
        word=word+icon;
        }else{
            word="";
        }        
        if(word=="for"){
           contador=contador-2;
        }

        if(icon==';'){
         contador++;
        }
        if(icon=='{'){
         contador++;
        }
         if(icon=='#'){
         contador++;
         }


        
    }
                    
        
    archivo.close();

return contador;
}
#endif //_Input_H