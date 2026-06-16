#include<iostream>
using namespace std;

void sayHello(){
  cout<<"Hello World!"<<endl;
}

void assistant();

void sum(int a, int b){
  cout<<"Sum is: "<<a+b<<endl;
}

void diff(int a, int b){
  cout<<"Diff is: "<<a-b<<endl;
}

// int Sum(int a, int b, int c){
//   int sum = a+b+c;
// }

int main(){
  //Function in CPP
  sayHello();
  assistant();
  sum(10,20);
  // Sum(10,20,30);
  diff(20,10);
  return 0;
}

  void assistant(){
    cout<<"I am your assistant."<<endl;
  }