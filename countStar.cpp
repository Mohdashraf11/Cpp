#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int star_count = 0 ,hash_count = 0 ;

    for(char c : s){
        if(c == '*')  star_count++ ;
        else if(c == '#') hash_count++ ; 
    }

    cout << (star_count - hash_count) << endl ;

    return 0 ;
}