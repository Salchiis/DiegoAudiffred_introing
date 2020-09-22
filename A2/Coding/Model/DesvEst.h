#include <iostream>
#include <math.h>

using namespace std;

class DesvEst{

public: 
double getVar(double lista[],int tam,double prom);
};
  
  double DesvEst::getVar(double lista[],int tam,double prom){ 
    float varianza=0.0, ds=0.0;
 
        for(int i=0;i<tam;i++) {
             varianza=varianza+pow((lista[i]-prom),2);
            }
   ds=sqrt(varianza/(tam-1));

 return ds;
}

