#include <bits/stdc++.h> 
using namespace std ;
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n  = 6;
    

    vector <int> arr(n);
    cout << "Enter the elemnets :";
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int largest = largestElement(arr, n);
    cout << "The largest element is:" << largest << endl;

    return 0;
}
