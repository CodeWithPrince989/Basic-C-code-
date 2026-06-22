#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello World";

  //  for(int i = 0; i < str.length(); i++){    //Dot operator is used to access the length function of the string class, use in oops
  //    cout<<str[i]<<"-";
  //  }
  // cout<<"\n";
  for(char ch : str){
     cout<<ch<<",";
   }
  cout<<endl;
  return 0;
}
