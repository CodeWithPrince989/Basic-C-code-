#include <iostream>
using namespace std;

int main(){
    // int age = 14;
    int age;
    cout << "Enter your age: ";
    cin>>age;

    if(age >= 18){
        cout<<"can vote" <<endl;
}   if(age >= 45){
    cout<<"contest for elections"<<endl;
}
else {
    cout<<"cannot vote"<<endl;
}
return 0;
}