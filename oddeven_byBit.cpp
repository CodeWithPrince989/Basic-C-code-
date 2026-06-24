#include<iostream>
using namespace std;

void oddEven(int n){
  if(n&1){
    cout<<"Odd"<<endl;
  }else{
    cout<<"Even"<<endl;
  }
}

int main(){
  // Finding Odd or Even Number
  //odd -> right most bit is 1
  //even -> right most bit is 0
  oddEven(10);
  return 0;
}