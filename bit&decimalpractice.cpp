#include<iostream>
using namespace std;

void bintoDec(int binNum){
  int n = binNum;
  int decNum = 0;
  int pow = 1;
  
  while(n>0){
    int lastDigit = n%10;
    decNum += lastDigit*pow;
    pow *= 2;
    n = n/10;
  }
  
  cout<< decNum << endl;
}

int main(){
  int bintoDec(111111);
  int bintoDec(10110);
  return 0;
}