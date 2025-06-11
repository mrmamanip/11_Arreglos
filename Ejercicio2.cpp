#include<iostream>
using namespace std;
int main(){
    int n, s, prom, A[20];
    cin >> n;
    s = 0;
    for ( int i = 1 ; i < n ; i++ ) {
        cin >> A[i];
        s = A[i] + s;
    }
    prom = s / n;
    for ( int i = 1 ; i < n ; i++ ){
        if ( A[i] > prom ){
            cout << A[i] << endl;
        }
    }
    return 0;
}