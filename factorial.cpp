#include <iostream>
using namespace std;

void fact(int n){
    int factorial = 1;

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "Factorial = " << factorial << endl;
}

int main(){
    fact(3);
    return 0;
}