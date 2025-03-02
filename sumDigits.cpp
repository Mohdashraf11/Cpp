#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n; 
    cout << "Enter the number: " ;
    cin >> n ;

    int sum=0;
    // for(int temp=n ;temp>0;temp/10){
    //     int digit = temp % 10 ;
    //     sum += digit ;
    // }
    while (n >0){
        int ldig = n % 10;
        sum += ldig ;
        n = n/10;
    }

    cout << "The sum of digits: " << sum << endl ;
    return 0;
}