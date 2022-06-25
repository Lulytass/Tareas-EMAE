#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

float perimetro(int , int);
float hipotenusa(int,int);
int main(){
    float per;
    int cat1, cat2;
    cout << "ingrese los lados del triangulo: ";
    cin >>  cat1>>cat2;
    per =perimetro(cat1,cat2);
    cout << "el perimetro es: "<<fixed<<setprecision(2)<<per;
return 0;

    }
float perimetro (int n, int n1){
    float hipo;
    hipo= hipotenusa(n,n1);
    return n+n1+hipo;
};
float hipotenusa(int n, int n1){
    return sqrt(pow(n,2)+pow(n1,2));

}


