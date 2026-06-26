#include<iostream>
using namespace std;

void binarytodecimal(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow =1;

    while(n>0){
        int lastDigit = n%10;
        decNum += lastDigit*pow;
        pow*=2;
        n = n/10;
    }
    cout<<decNum<<endl;
}

int main(){
    binarytodecimal(111111);
    binarytodecimal(10110);
    binarytodecimal(10011);
    binarytodecimal(110010);
}