#include<iostream>
using namespace std;
int main(){
    int n, s, prom, A[20];
    cout << "Inserte el numero de elementos del arreglo: "; 
    cin >> n;
    s = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        cout << "Introduzca el elemento " << i << " : ";
		cin >> A[i];
        s = A[i] + s;
    }
    prom = s / n;
    cout << "Los elementos que exeden al promedio son: ";
    for ( int i = 0 ; i < n ; i++ ){
        if ( A[i] > prom ){
            cout << A[i] << " ";
        }
    }
    return 0;
}
