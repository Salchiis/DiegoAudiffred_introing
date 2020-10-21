#include <iostream>
#include "string.h"
#include "Logic.h"

using namespace std;

int main(){
    Logic log;
    cout<<"Programa 2A"<<endl;
    char palabra1[10]; 
    cout<<"Dame el nombre del archivo que quieres leer"<<endl;
    cin.getline(palabra1,10,'\n'); 
    log.logic3a(palabra1);
     
       
}
