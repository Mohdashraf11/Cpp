#include<bits/stdc++.h>
using namespace std ;

void countNum(int i, int n){
    if (i>n) return ;
    cout << i << endl ;
    countNum(i+1, n) ;
}

int main(){
    cout << "Enter the value: " ;
    int n ;
    cin >> n ;
    countNum(1,n);
}