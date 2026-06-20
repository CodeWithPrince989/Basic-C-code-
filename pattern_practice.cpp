#include<iostream>
using namespace std;

void num_pattern(int n){
    for(int i=1; i<=n; i++){
       for(int j=1; j<=n; j++){
           cout<<i;
       }      
       cout<<endl;
    }
}

void star_pattern(int n){
   for(int i=1; i<n; i++){
      for(int j=1; j<=i; j++){
         cout<<"*";
      }
      cout<<endl;
   }
}

void star_pattern_reverse(int n){
   for(int i=1; i<n; i++){
      for(int j=1; j<i; j++){
         cout<<j;
      }
      cout<<i<<endl;
   }
}



void onezeroonetriangle(int n){
   for(int i=1; i<n; i++){
      for(int j=1; j<=n-i; j++){
         cout<<"*";
      }
      cout<<endl;
   }
}

int main(){
    // num_pattern(5);
    // star_pattern(5);
    // star_pattern_reverse(5);
       int n = 4;
       char ch = 'A';

       for(int i = 1; i < n+2; i++) {
           for(int j = 1; j < i; j++) {
               cout << ch;
               ch++;
           }
           cout << endl;
          
       }


  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1 || j==0 || j==n-1)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }
}

