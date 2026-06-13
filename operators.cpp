#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    cout << "+" << (a+b) << endl; //8
    cout << "-" << (a-b) << endl;   //-2
    cout << "*" << (a*b) << endl;   //15
    cout << "/" << (b/a) << endl;   //1
    cout << "%" << (a%b) << endl;   //Module (remainder) :2

    int a=3;
    a++;    //(post) use & then update
    cout <<"a=" << a << endl;
    a--;    //(post)
    cout << "a=" << a << endl;

    int b=4;
    ++b; //(pre) update & then use
    cout <<"b=" << b << endl;
    --b; //(pre)
    cout << "b=" << b << endl;
//Symbols that tell compiler to perform some operation (a + b)
//Type Of Operator
// -Arithmetic => 1) Bimary(+, -, *, /, %), 2) Unary(++, --)
// -Assignment 
// -Relational
// -Logical
// -Bitwise


//Assignment Operators(=, +=, -=, *=, /=)
    int c = 5;
    a+=5;
    cout<<a<<endl;
    a-=5;
    cout<<a<<endl;
    a*=5;
    cout<<a<<endl;
    a/=5;
    cout<<a<<endl;
    return 0;
}
