#ifndef _Lineal_H
#define _Lineal_H

#include "string.h"
#include <iostream>
#include "math.h"
#include "Output.h"
using namespace std;

class Lineal {

private: 
   
public:
double control(string clase,double datos[],int tam); 
double sumaX(double *p,int tam);
double sumaY(double *q,int tam);
double sumaXY(double *p , double *q,int tam);
double sumaXX(double *p,int tam);
double sumaYY(double *q,int tam);
double getAvrX(double suma,int tam);
double getAvrY(double suma,int tam);
double getB1(double sumita,double tam,double promediox,double promedioy,double sumaX2);
double getRXY(int tam,double sumita,double sumx,double sumy,double promediox,double promedioy,double sumaX2,double sumaY2);
double getB0(double promedioy, double BB1, double promediox);
double getYk(double BB0,double BB1,double xk);
double getR2(double r);
double *llenarX(double arrayX[],int tam,double datos[]);
double *llenarY(double arrayY[],int tam,double datos[]);


};



double *Lineal::llenarX(double arrayX[],int tam,double datos[]){
    int yey=0;
    for(int numero=0;numero<tam/2;numero++){
           arrayX[numero]=datos[yey]; 
           yey=yey+2;
         
        }
    return arrayX;
}

double *Lineal::llenarY(double arrayY[],int tam,double datos[]){
    int yoy=1;

     for(int numero=0;numero<tam/2;numero++){
           arrayY[numero]=datos[yoy]; 
           yoy=yoy+2;
        }
    return arrayY;
}

double Lineal::sumaX(double *p,int tam){
    double suma=0;
    for(int i=0;i<tam/2;i++){ 
      suma+=(*(p+i));
    }
    return suma;
}

double Lineal::sumaY(double *q,int tam){
    double suma=0;
    for(int i=0;i<tam/2;i++){ 
      suma+=(*(q+i));
    }
    return suma;
}

double Lineal::getAvrY(double suma,int tam){
    double promedio=suma/(tam/2);
    return promedio;
}

double Lineal::getAvrX(double suma,int tam){
    double promedio=suma/(tam/2);
    return promedio;
}

double Lineal::sumaXX(double *p, int tam){
    double suma=0;
     for(int i=0;i<tam/2;i++){ 
      suma+=(pow(*(p+i),2));
    }
return suma;
}

double Lineal::sumaYY(double *q, int tam){
    double suma=0;
     for(int i=0;i<tam/2;i++){ 
      suma+=(pow(*(q+i),2));
    }
return suma;
}

double Lineal::sumaXY(double *p , double *q,int tam){
    double suma=0;
     for(int i=0;i<tam/2;i++){ 
      suma+=(*(p+i)*(*(q+i)));
    }
    return suma;
}

double Lineal::getB1(double sumita,double tam,double promediox,double promedioy,double sumaX2){
    double arriba=0;
    double abajo=0;

    arriba=(sumita)-((tam/2)*promediox*promedioy);
    abajo=(sumaX2)-((tam/2)*(pow(promediox,2)));

    double total=arriba/abajo;

 return total;
}

double Lineal::getRXY(int tam,double sumita,double sumx,double sumy,double promediox,double promedioy,double sumaX2,double sumaY2){

double arriba=((tam/2)*sumita)-(sumx)*(sumy);
double abajo=sqrt(((tam/2)*sumaX2)-(pow(sumx,2)));
double abajo2=sqrt(((tam/2)*sumaY2)-(pow(sumy,2)));
double r=arriba/(abajo2*abajo);
return r;
}

double Lineal::getR2(double r){
    double r2=pow(r,2);
    return r2;
}

double Lineal::getB0(double promedioy, double BB1, double promediox){
    double BB0;
    BB0=promedioy-(BB1*promediox);
    return BB0;
}

double Lineal::getYk(double BB0,double BB1,double xk){
   double Yk=BB0+(BB1*xk);
   return Yk;
}


double Lineal::control(string clase,double datos[],int tam){
   double arrayX[tam/2];
    double arrayY[tam/2];
    double xk=386;

    double *p;
    double *q;

    p=llenarX(arrayX,tam,datos);
    q=llenarY(arrayY,tam,datos);
    double sumx=sumaX(p,tam);
    double sumy=sumaY(q,tam);
    
    double promediox=getAvrX(sumx,tam);
    double promedioy=getAvrY(sumy,tam);

    double sumaX2=sumaXX(p,tam);
    double sumaY2=sumaYY(q,tam);

    double sumita=sumaXY(p,q,tam);    
    double BB1= getB1(sumita,tam,promediox,promedioy,sumaX2);

    double r=getRXY(tam,sumita,sumx,sumy,promediox,promedioy,sumaX2,sumaY2);
    double r2=getR2(r);

    double BB0=getB0(promedioy,BB1,promediox);
    double yk=getYk(BB0,BB1,xk);

    Output out;
    out.writeData(sumx,sumy,promediox,promedioy,sumaX2,sumaY2,sumita,BB1,r,r2,BB0,yk);
     return 0;
   }
#endif 