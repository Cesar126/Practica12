#include <iostream>
#include <cmath>
using namespace std;

int factorial(int k)
{
int fac=1;
for(int i=1; i<=k; i++)
fac*=i;
return fac;
}


int potencia(int base, int exponente)
{
int resultado=1;
for (int k=1; k<=exponente; k++)
resultado=resultado*base;
return resultado;
} 

double serie(int n){
int suma;
for(int i=2; i<n; i++)
suma+=(factorial(i)/potencia(5,i-1));
return  suma;
}
 
   

   


int main(){
  

  cout<<serie(5);
  cout<<endl<<"El factorial de 5 es "<<factorial(5);




}