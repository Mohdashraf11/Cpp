#include <bits/stdc++.h>
using namespace std ;

int factorialN(int n){
    if(n == 1) return 1;
    return n * factorialN(n-1);
    
}

int main(){
    cout <<"Enter the value: " ;
    int n ;
    cin >> n ;
    cout << factorialN(n) ;
}