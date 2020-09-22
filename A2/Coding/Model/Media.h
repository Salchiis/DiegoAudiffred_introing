
#ifndef _MEDIA_H
#define _MEDIA_H

#include <string>
#include <iostream>

using namespace std;

class Media{
public: 
    
double getMedia(double lista[],int tam);
    
};

double Media::getMedia(double lista[],int tam){
    double prom=0;
    int contador=0;
    for(int i=0;i<tam;i++){
        contador=contador+lista[i];
    }
    prom=contador/tam;
    return prom;
}
   





#endif //_LOGIC_H