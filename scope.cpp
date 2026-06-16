// Local vs Global scope of variables
#include<iostream>
using namespace std;

int num = 25;  // global variable

void sum(int a, int b){
    int s = a+b;  // local variable
    cout<<s;
}

int main(){
    sum(10,20);
  int s = 10;
  cout<<s;
  return 0;
}