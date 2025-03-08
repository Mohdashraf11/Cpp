#include <bits/stdc++.h>
using namespace std ;

int main(){
    int arr[] = {10, 28, 0, -2, -19} ;
    int size = 5 ;

    // int smallest = INT_MAX ;
    // for(int i =0;i < size; i++ ){
    //     if(arr[i] < smallest){
    //         smallest = arr[i] ;
    //     }
    // }

    // cout << "Smallest: " << smallest << endl; 

    int max = 0 ;

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest: " << max << endl ;
    return 0 ;
}