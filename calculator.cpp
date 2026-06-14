#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter a: \n";
    cin >> a ;
    cout << "Enter b: \n";
    cin >> b ;
    cout << "Enter operator: \n";
    cin >> op;

    // if(op == '+'){
    //     cout << "a  + b = " << a + b << endl;
    // }
    // else if(op == '-'){
    //     cout << "a  - b = " << a - b << endl;
    // }
    // else if(op == '*'){
    //     cout << "a  * b = " << a * b << endl;
    // }
    // else if(op == '/'){
    //     cout << "a  / b = " << a / b << endl;
    // }
    // else{
    //     cout << "Invalid operator" << endl;
    // }

    switch(op){
         case '+': cout << "a  + b = " << a + b << endl;
                break;
         case '-': cout << "a  - b = " << a - b << endl;
                break;
         case '*': cout << "a  * b = " << a * b << endl;
                break;
         case '/': cout << "a  / b = " << a / b << endl;
                break;
         default: cout << "Invalid operator" << endl;
    }
             
    return 0;
}