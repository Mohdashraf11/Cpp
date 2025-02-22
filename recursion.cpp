#include <bits/stdc++.h>
using namespace std ;

void printName(int i , int n){
    if(i > n) return ;
    cout << "Mohd Ashraf" << endl ;
    printName(i+1,n) ;
}

int main(){
    cout << "Enter the value for times you want to print your name : " ;
    int n;
    cin >> n ;
    printName(1 , n);
}