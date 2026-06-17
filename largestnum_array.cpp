#include<iostream>
using namespace std;

int main(){
  int marks[5] = {10,20,30,40,50};
  cout << marks[0] << endl;
  cout << marks[1] << endl;
  cout << marks[2] << endl;
  cout << marks[3] << endl;
  cout << marks[4] << endl;
  cout << marks[5] << endl; // this will print garbage value, Warning: array subscript out of bounds [-Warray-bounds]
  cout << sizeof(marks) << endl;    // 20 bytes
  cout << sizeof(marks)/sizeof(marks[0]) << endl;    // This will print the size of array by dividing the total size of array by the size of first element of array
  cout << sizeof(marks[0]) << endl;  // 4 bytes

  //Memory is statically allocated for array

  //Output & Input in array
  int marks2[5];
  for(int i=0;i<5;i++){
    cin >> marks2[i];
  }
  for(int i=0;i<5;i++){
    cout << marks2[i] << endl;
  }
  return 0;
}