
#ifndef _Output_H
#define _Output_H

#include <string>
#include <iostream>

using namespace std;

class Output{
public: 
    
void writeData(double sumx,double sumy, double promediox, double promediou, double sumaX2,double sumaY2, double sumita,double BB1, double r, double r2, double BB0, double yk);
private: 
    
};

void Output::writeData(double sumx,double sumy, double promediox, double promedioy, double sumaX2,double sumaY2, double sumita,double BB1, double r, double r2, double BB0, double yk){
    cout<<"El valor de la suma de x es = "<<sumx<<endl;
    cout<<"El valor de la suma de y es = "<<sumy<<endl;
    cout<<"El valor del promedio de la suma de x es = "<<promediox<<endl;
    cout<<"El valor del promedio de la suma de y es = "<<promedioy<<endl;
    cout<<"El valor de la suma de x^2 es = "<<sumaX2<<endl;
    cout<<"El valor de la suma de y^2 es = "<<sumaY2<<endl;
    cout<<"El valor de la suma de x*y es = "<<sumita<<endl;
    cout<<"El valor de BB1 es= "<<BB1<<endl;
    cout<<"El valor de BB0 es= "<<BB0<<endl;
    cout<<"El valor de R es= "<<r<<endl;
    cout<<"El valor de R^2 es= "<<r2<<endl;
    cout<<"La formula de regresion lineal es: "<<BB0<<"+"<<BB1<<"x = y"<<endl;




   
}




#endif 