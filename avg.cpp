#include <iostream>
using namespace std;

int main() {
    int eng;
    int sci;
    int math;
    cout<<"Enter marks in English: ";
    cin>>eng;
    cout<<"Enter marks in Science: ";
    cin>>sci;
    cout<<"Enter marks in Math: ";
    cin>>math;
    cout<<"Total marks: "<<eng+sci+math<<endl;
    cout<<"Percentage: "<<(eng+sci+math)/3<<"%";    
    return 0;
}