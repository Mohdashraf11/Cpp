#include <bits/stdc++.h>
using namespace std ;

int decToBinary(int n){
    int ans = 0, power = 1 ;
    
    while(n > 0){
        int remainder = n % 2 ;
        ans += power * remainder;
        n /= 2 ;
        power *= 10 ;
    }
    return ans ;
}

int main(){
    int n;
    cout << "Enter the value : " << endl;
    cin >> n ;
    cout << decToBinary(n) << endl ;
}