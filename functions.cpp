#include <bits/stdc++.h>
using namespace std;
// functions are set of code which performs something for you 
// Function are used to modularised the code 
// Function are used to increase the readibility
// Function are used to use the code multiple times 
// four types of Functions 
// void funtion
// return function
// parameter functions 
// non-parameter function 

// void printName(string name) {
//     cout << name ;
// }

int sum (int num1,int num2) {
    int num3 = num1 + num2 ;
    return num3;
}

int main(){
    // string name ;
    // // cin >> name ; in this it only reads furst white space so the output will Mohd ;
    // getline(cin, name);
    // printName(name);

    int num1 ,num2 ;
    cin >> num1 >> num2 ;
    int totl = sum(num1,num2);
    cout << totl ; 
    return 0;
}