#include<iostream>
#include<cmath>
using namespace std;
int potencia(int x,double n){
if(n==0){
 return 1;
}
return x*potencia(x,n-1);
}

int main(){
int n;
double x;
cout<<"Ingrese el valor de n: "<<endl;
cin>>n;
cout<<"Ingrese el valor de x: "<<endl;
cin>>x;

 if(n<0){
cout<<"El numero debe ser un numero mayor a cero"<<endl;
 }
 else {
 	cout<<x<<" elevado a la "<<n<<" es:"<<potencia(x,n)<<endl;
 }
 return 0;
}


