#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "the value of arr in array :" << arr[0] << endl ; 
}

int main () {
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    doSomething(arr,n);

    cout << "the value of arr in array :" << arr[0] << endl ; 
    return 0;
}