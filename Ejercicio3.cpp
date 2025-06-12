#include<iostream>
using namespace std;
int main(){
    int n, A[20], aux;
    cout << "Inserta el numero de elementos del arreglo: ";
    cin >> n;
    for ( int i = 0 ; i < n ; i++ ){
    	cout << "Introduzca el elemtno " << i << " : ";
        cin >> A[i];
    }
    for ( int i = 0 ; i < n/2 ; i++ ){
        aux = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = aux;
    }
    cout << "Serie de elementos intercalados de lugar:" << endl;
    for ( int i = 0 ; i < n ; i++ ){
        cout << A[i] << " ";
    }
    return 0;
}
