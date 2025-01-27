// Tegan Jetton 1/27/25 CIS142 C++ I
//
#include <iostream>
//#include <cmath>
using namespace std;
void calcCircleArea(double);
const double PI = 3.14159265358979;
int main()
{
    double radius;
    cout << "Enter radius: " << endl;
    cin >> radius;
    calcCircleArea(radius);
}

void calcCircleArea(double r){
    double area = PI * r *r;
    cout << "\nThe area of the circle is: " << area << endl;
}
