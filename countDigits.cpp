#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int cnt = 0 ;
    while(n > 0) {
        cnt = cnt + 1 ;
        n = n/10 ;
    }
    return cnt ;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int cnt = countDigits(n);
    cout << "The number of digits is: " << cnt << endl;
    return 0;
}    
