#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
  char str1[100];
  char str2[100];
  strcpy(str1, "Hello");
  strcpy(str1, str2);
  cout << str1 << endl;
  cout << str1 << endl; 

  //strcat
  strcat(str1, str2);
  cout << str1 << endl;

  //strcmp
  cout << strcmp(str1, str2) << endl;
  cout << strcmp(str2, str1) << endl;
  return 0;
}