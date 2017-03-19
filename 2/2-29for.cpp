#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        //cout<<"current check number is :"<<i<<endl;

        bool isPrimeNum = true;

        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                isPrimeNum = false;
                break;
            }
        }

        if (isPrimeNum) {
            cout<<"number '"<<i<<"' is Prime Number."<<endl;
        } else {
            //cout<<"number '"<<i<<"' is not Prime Number."<<endl;
        }
    }

    return 0;
}
