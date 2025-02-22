<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age < 18) {
        cout << "you are not eligible for job";
    }
    else if (age <= 50) {
        cout << "you are eligible for job";
    }
    else if (age <= 57) {
        cout << "Your age is: " << age << " you are eligible for job, you will be retired soon";
    }
    else {
        cout << "you are retired";
    }
=======
#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age < 18) {
        cout << "you are not eligible for job";
    }
    else if (age <= 50) {
        cout << "you are eligible for job";
    }
    else if (age <= 57) {
        cout << "Your age is: " << age << " you are eligible for job, you will be retired soon";
    }
    else {
        cout << "you are retired";
    }
>>>>>>> a5d44c6156aa214ef05e8791a54c43df54590114
}