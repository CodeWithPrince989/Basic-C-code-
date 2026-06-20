#include <iostream>
using namespace std;

int main(){
    float pencil_cost, pen_cost, eraser_cost;
    cout <<"Enter The Cost of Pencil" << endl;
    cin>>pencil_cost;

    cout <<"Enter The Cost of Pen" << endl;
    cin>>pen_cost;

    cout <<"Enter The Cost of Eraser" << endl;
    cin>>eraser_cost;

    float Total_cost = (pencil_cost + pen_cost + eraser_cost) * 18/100;

    printf("The Total Bill with 18 Percentage GST Included is: %d", Total_cost);
    return 0;
}