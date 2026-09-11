#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int n) {
if (n == 0)
    return 0;
return arr[n - 1] + sumaArreglo(arr, n - 1);
}

int main() {
int n;

cout<< "Cuantos elementos tiene el arreglo? ";
cin >> n;

int arr[n];
for (int i = 0; i < n; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> arr[i];
    }

cout << "La suma de los elementos es: " << sumaArreglo(arr, n) << endl;

return 0;
}
