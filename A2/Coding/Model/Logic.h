#ifndef _LOGIC_H
#define _LOGIC_H

#include "string.h"
#include <iostream>
#include "Data.h"
#include "methodCounter.h"
#include "LineCounter.h"
#include "Output.h"




using namespace std;

class Logic {
public: 
   
void logic1a(char palabra1[20]);
private: 
    
};



void Logic::logic1a(char palabra1[10]){

    int count=0;
    while(palabra1[count]!='\0'){
        count++;
    }

    Data dat;
    char palabra2[]=".h";
    int length = sizeof(palabra2)/sizeof(char); // length=6
    char palabra3[count+length];
    strcpy(palabra3,palabra1);
    strcat(palabra3,palabra2); //Hasta aqui hemos armado la palabra del archivo quer vamos a leer 
    string palabra="";
    for (int i = 0; i < count+length; i++) { 
        palabra = palabra + palabra3[i]; 
    } 

    dat.saveData(palabra); //Imprimimos el codigo

      string clase="";
    for (int i = 0; i < count; i++) { 
        clase = clase + palabra1[i]; 
    } 


    methodCounter met;
    int metodos=met.metodos(palabra,clase);
    


    LineCounter line;
    int lineas=(line.lineas(palabra,palabra1)+1);


    Output out;
    out.writeData(palabra,clase,metodos,lineas);
    
   



        

}

#endif //_LOGIC_H