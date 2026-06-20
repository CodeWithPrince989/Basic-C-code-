#include <iostream>
using namespace std;

void avg(int a, int b, int c){
    cout << "Average of three numbers is: " << (a+b+c)/3 << endl;
}

void largestofthree(int a, int b, int c){
  if(a>b && a>c){
    cout << "Largest number is:" << a << endl;
  }
  else if(b>a && b>c){
    cout << "Largest number is:" << b << endl;
  }
  else{
    cout << "Largest number is:" << c << endl;
  }
}

void areaofrect(int a, int b){
  cout << "Area of rectangle is:" << a*b << endl;
}

void evenodd(int a){
  if(a%2==0){
    cout << "Number is even" << endl;
  }
  else{
    cout << "Number is odd" << endl;
}
}

void multiple(int a=3){
  for(int i=10; i<=50; i++){
    cout << a*i << endl;
  }
}

void areaofsqr(int n){
  cout << "Area Of square is: " << n*n << endl;
}


int main() {
    avg(1,2,3);
    largestofthree(1,2,3);
    areaofrect(1,2);
    evenodd(1);
    multiple();
    areaofsqr(4);
    return 0;
}