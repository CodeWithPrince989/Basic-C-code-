#include<iostream>
using namespace std;

void funInt(){
  int *ptr = new int;
  *ptr = 10;
  cout << *ptr << endl;
  delete ptr;
}

void funArray(){
  int size;
  cin>>size;
  int *ptr = new int[size];
  int x = 1;
  for(int i=0; i<size; i++){
    ptr[i] = x;
    x++;
  }  
  cout << endl;
}

int main(){
  funInt();
  funArray();
  return 0;
}