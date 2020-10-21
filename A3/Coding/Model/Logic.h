#ifndef _LOGIC_H
#define _LOGIC_H

#include "string.h"
#include <iostream>
#include "Input.h"
#include "Data.h"
#include "Lineal.h"

using namespace std;

class Logic {
public: 
double *doData(double datos[], string clase);   
void logic3a(char palabra1[]);
int tamWord(char palabra1[]);
int doInput(string clase);
string concatenar(char palabra1[],char palabra2[],char palabra3[],int length);
private: 
    
};

int Logic::tamWord(char palabra1[10]){
        int count=0;
        while(palabra1[count]!='\0'){
        count++;   
         }
    return count;
}

string Logic::concatenar(char palabra1[],char palabra2[],char palabra3[],int length){

    strcpy(palabra3,palabra1);
    strcat(palabra3,palabra2); 
    string palabra="";
    for (int i = 0; i <  tamWord(palabra1)+length; i++) { 
        palabra = palabra + palabra3[i]; 
    } 
    return palabra;
}

int Logic::doInput(string clase){
    Input inp;
    return inp.readData(clase);

}

double * Logic::doData(double datos[], string clase){
    Data dat;
    return dat.saveData(clase,datos);
}

void Logic::logic3a(char palabra1[10]){  
    char palabra2[]=".txt";
    int length = sizeof(palabra2)/sizeof(char); 
    char palabra3[tamWord(palabra1)+length];
    string clase=concatenar(palabra1,palabra2,palabra3,length);
    int tam=doInput(clase);   
    double *p;
    double datos[20];

    p=doData(datos,clase);
    for (int i = 0; i <tam; i++) { 
      datos[i]=(*(p+i));
    }

    Lineal lin;
    lin.control(clase,datos,tam);

}




    
   


#endif //_LOGIC_H