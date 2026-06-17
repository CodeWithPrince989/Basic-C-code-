#include <iostream>
using namespace std;

int main(){
  //arrays are passed by reference: the function gets the address of the array
  int a = 5;
  int *ptr = &a;
  cout << ptr << endl; //prints the address of a

  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int);
  cout << arr << endl;
  cout << *(arr+1) << endl;
  cout << *(arr+2) << endl;
  cout << *(arr+3) << endl;
  cout << *(arr+4) << endl;
  cout << *(arr+5) << endl;
  return 0;
}  