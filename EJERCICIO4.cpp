#include<iostream>
using namespace std;
int maximo(int arr[],int n){
	if(n==1)
	return arr[0];
	
	int resto=maximo(arr,n-1);
	if(arr[n-1]>resto)
	return arr[n-1];
	return resto;
	
}
int main(){
	int n;
	cout<<"Cuantos elementos tiene el arreglo?: ";
	cin>>n;
	
		int arr[n];
		for(int i=0;i<n;i++){
			cout<<"El elemento "<<i+1<<" es : ";
			cin>>arr[i];
		}
		
		cout<<"El elemento maximo es : "<<maximo(arr,n)<<endl;
		
		return 0;
	}

