#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    //pir^2h

    float pi=3.14f,VOC;
    int r,h;
    cout <<"Enter radius : \n";
    cin >> r;

    cout <<"Enter height : \n";
    cin >> h;

    VOC=pi*pow(r,r)*h;

    cout <<"Volume of cylinder is = " << VOC  << endl;

    return 0;
    
}