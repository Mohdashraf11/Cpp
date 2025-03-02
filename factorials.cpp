#include <bits/stdc++.h>
using namespace std ;

int factN(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i ;
    }
    return fact ;
}

int main(){
    int n;
    cout << "Enter the value: "  ;
    cin >> n ;
    cout << factN(n);
    return 0 ;
}