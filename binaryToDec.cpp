#include <bits/stdc++.h>
using namespace std ;

int binaryToDec(int n){
    int ans = 0 , pow = 1 ;

    while(n > 0){
        int remainder = n % 10 ;
        ans += remainder * pow ;
        n /= 10 ;
        pow *= 2 ;
    }
    return ans ;
}

int main(){
    int n ;
    cout << "Enter the value : " << endl;
    cin >> n ;

    cout << binaryToDec(n) << endl ;
}