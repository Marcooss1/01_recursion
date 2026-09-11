#include <iostream>
using namespace std;
 
int buscar(int arr[], int i, int n, int x) {
    if (i == n)
        return -1;
    if (arr[i] == x)
        return i;
    return buscar(arr, i + 1, n, x);
}
 
int main() {
    int n;
 
cout << "¿Cuantos elementos tiene el arreglo? ";
cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
 
    int x;
cout << "¿Que valor quieres buscar? ";
cin >> x;
 
    int pos = buscar(arr, 0, n, x);
 
    if (pos != -1)
        cout << "El valor esta en la posicion " << pos << endl;
    else
        cout << "El valor no esta en el arreglo" << endl;
 
    return 0;
}
