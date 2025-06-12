#include<iostream>
using namespace std;
int main(){
    int n, max, A[20];
    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> n;
    for ( int i = 0 ; i < n ; i++) {
        cout << "Introduzca el elemento " << i << " : ";
		cin >> A[i];
    }
    max = A[0];
    for ( int i = 1 ; i < n ; i++ ) {
        if ( A[i] > max ) {
            max = A[i];
        }
    }
    cout << "El numero maximo introducido es: ";
    cout << max;
    return 0;
}
