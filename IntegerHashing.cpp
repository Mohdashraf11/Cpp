#include<bits/stdc++.h>
using namespace std ;

int main(){
    int s;
    cin >> s;
    int arr[s];
    for(int i = 0;i<s;i++){
        cin >> arr[i] ;
    }
    

    int hash[13] = {0};
    for(int i = 0;i<s; i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin >> q ;
    while(q--){
        int c ;
        cin >> c ;
        cout << hash[c] << endl ;
    }
    return 0;
}